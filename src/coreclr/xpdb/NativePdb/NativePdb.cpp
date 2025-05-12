// Based on a modified LLVM implementation
// Copyright (c) 2025  Denis Kuzmin <x-3F@outlook.com> github/3F
// NOTE: https://github.com/3F/coreclr/issues/3#issuecomment-2845660889
//
#include "NativePdb.h"

using namespace io::github::_3F::coreclr::pdb::native;

std::vector<NativePdb::InjectedSourcesInfo> NativePdb::readInjectedSources()
{
    auto sources = m_pdbSession->getInjectedSources();
    if(!sources || !sources->getChildCount()) return {};

    std::vector<InjectedSourcesInfo> ret;
    while(auto src = sources->getNext())
    {
        GUID lang;
        if(src->getCompression() == PDB_SourceCompression::DotNet)
        {
            memcpy(&lang, src->getCode().data(), 16);
        }
        else lang = { 0 };

        ret.push_back({ src->getFileName(), lang });
    }
    return ret;
}

std::vector<NativePdb::MethodDebugInfo> NativePdb::readMethodDebugInfo()
{
    PDBFile& pdb = m_pdbSession->getPDBFile();
    if(!pdb.hasPDBDbiStream()) return {};

    Expected<DbiStream&> dbiS = pdb.getPDBDbiStream();
    if(!dbiS) throw NativePdbException{ NativePdbErrorCode::FailedDbiStream };

    const DbiModuleList& modules = (*dbiS).modules();

    std::vector<MethodDebugInfo> ret;
    for(uint32_t idx = 0, max = modules.getModuleCount(); idx < max; ++idx)
    {
        const DbiModuleDescriptor& desc = modules.getModuleDescriptor(idx);
        if(desc.getSymbolDebugInfoByteSize() < 1) continue;

        Expected<ModuleDebugStreamRef> dbgS = m_pdbSession->getModuleDebugStream(idx);
        if(!dbgS) throw NativePdbException{ NativePdbErrorCode::FailedDebugStream };

        extractSequencePoints(dbgS.get(), ret);
    }
    return ret;
}

void NativePdb::extractSequencePoints(ModuleDebugStreamRef& dbgS, std::vector<MethodDebugInfo>& output)
{
    for(const auto& ss : dbgS.getSubsectionsArray())
    {
        if(ss.kind() != DebugSubsectionKind::Lines) continue;

        std::vector<SequencePoint> points;

        DebugLinesSubsectionRef lines;
        BinaryStreamReader reader(ss.getRecordData());

        if(Error erl = lines.initialize(reader)) continue;

        std::string fname = {};

        for(const LineColumnEntry& entry : lines)
        {
            if(entry.LineNumbers.empty()) continue;

            if(fname.empty())
            {
                fname = getSrcFileName(dbgS, entry);
            }

            auto colIt = entry.Columns.begin();
            auto colEnd = entry.Columns.end();

            for(const LineNumberEntry& lineEntry : entry.LineNumbers)
            {
                SequencePoint p = { 0 };
                LineInfo line(lineEntry.Flags);

                p.ILOffset = lineEntry.Offset;
                p.StartLine = line.getStartLine();

                if(!lines.hasColumnInfo() || colIt >= colEnd) continue;

                p.StartColumn = colIt->StartColumn;
                p.EndLine = line.getEndLine();
                p.EndColumn = colIt->EndColumn;

                ++colIt;
                points.push_back(std::move(p));
            }
        }

        output.push_back({ fname, points });
    }
}

std::string NativePdb::getSrcFileName(ModuleDebugStreamRef& dbgS, const LineColumnEntry& entry)
{
    Expected<DebugChecksumsSubsectionRef> eChecksums = dbgS.findChecksumsSubsection();
    if(!eChecksums) return {};

    const auto& checksums = eChecksums->getArray();
    if(!checksums.isOffsetValid(entry.NameIndex)) return {};

    auto checksumIter = checksums.at(entry.NameIndex);

    const SymbolCache& symc = m_pdbSession->getSymbolCache();

    auto srcFile = symc.getSourceFileById
    (
        symc.getOrCreateSourceFile(*checksumIter)
    );
    return srcFile->getFileName();
}