// Based on a modified LLVM implementation
// Copyright (c) 2025  Denis Kuzmin <x-3F@outlook.com> github/3F
// NOTE: https://github.com/3F/coreclr/issues/3#issuecomment-2845660889
//
#pragma once
#ifndef NATIVE_PDB_LLVM_IMPL
#define NATIVE_PDB_LLVM_IMPL

#include "llvm/DebugInfo/PDB/PDB.h"
#include "llvm/DebugInfo/PDB/IPDBInjectedSource.h"
#include "llvm/DebugInfo/PDB/Native/DbiStream.h"
#include "llvm/DebugInfo/PDB/Native/PDBFile.h"
#include "llvm/DebugInfo/PDB/Native/ModuleDebugStream.h"
#include "llvm/DebugInfo/PDB/Native/NativeSession.h"
#include "llvm/DebugInfo/CodeView/DebugLinesSubsection.h"

namespace io::github::_3F::coreclr::pdb::native
{
    using namespace llvm;
    using namespace llvm::pdb;
    using namespace llvm::codeview;

    enum class NativePdbErrorCode
    {
        FailedReadFile = 100,

        FailedDbiStream = 500,
        FailedDebugStream = 510,
    };

    class NativePdbException
    {
    public:
        const NativePdbErrorCode code;

        NativePdbException(NativePdbErrorCode code) : code(code) {};

        ~NativePdbException() = default;
    };

    class NativePdb final
    {
    public:

        struct SequencePoint
        {
            uint32_t ILOffset;
            uint32_t StartLine;
            uint32_t StartColumn;
            uint32_t EndLine;
            uint32_t EndColumn;
        };

        struct MethodDebugInfo
        {
            std::string Name;
            std::vector<SequencePoint> Points;
        };

        struct InjectedSourcesInfo
        {
            std::string Name;
            codeview::GUID Lang;
        };

        std::vector<InjectedSourcesInfo> readInjectedSources();

        std::vector<MethodDebugInfo> readMethodDebugInfo();

        NativePdb(std::string file)
        {
            std::unique_ptr<IPDBSession> session;
            if(Error err = loadDataForPDB(PDB_ReaderType::Native, file, session))
            {
                throw NativePdbException{ NativePdbErrorCode::FailedReadFile };
            }
            m_pdbSession.reset(static_cast<NativeSession*>(session.release()));
        }

        ~NativePdb() = default;

    private:

        void extractSequencePoints(ModuleDebugStreamRef& dbgS, std::vector<MethodDebugInfo>& output);

        std::string getSrcFileName(ModuleDebugStreamRef& dbgS, const LineColumnEntry& entry);

        std::unique_ptr<NativeSession> m_pdbSession;
    };
}

#endif // #ifndef NATIVE_PDB_LLVM_IMPL