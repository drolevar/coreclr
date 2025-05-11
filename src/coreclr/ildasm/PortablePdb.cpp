// Portable PDB short implementation without RTTI requirements, specially for https://github.com/3F/coreclr
// Copyright (c) 2016-2025  Denis Kuzmin <x-3F@outlook.com> github/3F
//
#include "PortablePdb.h"

using namespace io::github::_3F::coreclr;

void PortablePdb::readDocuments(std::vector<DocumentTable>& output)
{
    const uint8_t* curr = m_posAtDocumentTable;

    // Document Table: 0x30 https://github.com/dotnet/runtime/blob/6e335aa872bf1/src/libraries/System.Reflection.Metadata/specs/PortablePdb-Metadata.md#document-table-0x30
    std::array<uint32_t, _DocTableColSize> cols{};

    for(size_t row = 0; row < m_rowsAtDocument; ++row)
    {
        for(size_t col = 0; col < _DocTableColSize; ++col)
        {
            cols[col] = readNextColumn(m_heapIdxsWidth, curr);
        }

        std::string name = readDocumentNameFromBlob(cols[0]/*Column: Name*/);

        const GUID* startGuid = reinterpret_cast<const GUID*>(m_data.data()
                                + m_locStreams[StreamType::Guid]->Offset);

        const GUID* lang = startGuid + cols[3] - 1; //Column: Language; -1-based index to #Guid heap offset

        output.push_back({ name, *lang });
    }
}

void PortablePdb::readMethodDebugInfo(std::vector<MethodDebugInfoTable>& output)
{
    const uint8_t* curr = m_posAtMethodDebugInfo;

    // MethodDebugInformation Table: 0x31 https://github.com/dotnet/runtime/blob/6e335aa872bf/src/libraries/System.Reflection.Metadata/specs/PortablePdb-Metadata.md#methoddebuginformation-table-0x31
    // MethodDebugInfo Table logically extends MethodDef table. +Columns: Document; SequencePoints

    for(size_t row = 0; row < m_rowsAtMethodDebugInfo; ++row)
    {
        uint32_t docId = readNextColumn(m_rowsAtDocument < USHRT_MAX ? HeapIdx2B : HeapIdx4B, curr);
        uint32_t seqId = readNextColumn(m_heapIdxsWidth, curr);

        if(seqId == 0)
        {
            output.push_back({ docId });
            continue;
        }

        MethodDebugInfoTable mdi;
        mdi.InitialDocument = docId;

        readSequencePointsFromBlob(seqId, mdi);
        output.push_back(std::move(mdi));
    }
}

void PortablePdb::parseStreams()
{
    auto header = reinterpret_cast<const PortablePdbHeader*>(m_data.data());
    if(header->Magic != 0x424A5342)
    {
        throw PortablePdbException{ PortablePdbErrorCode::InvalidPdbFormat };
    }

    const uint8_t* curr = m_data.data() + sizeof(PortablePdbHeader);
    curr += header->Length + sizeof(PortablePdbStreams::Flags);
    auto streams = *reinterpret_cast<const uint16_t*>(curr);

    curr += sizeof(PortablePdbStreams::Streams);
    for(int i = 0; i < streams; ++i)
    {
        const PortablePdbStreamHeader* sHeader = reinterpret_cast<const PortablePdbStreamHeader*>(curr);

        curr += sizeof(PortablePdbStreamHeader);
        auto name = reinterpret_cast<const char*>(curr);

        if(!strcmp(name, "#~")) m_locStreams.insert({ StreamType::T, sHeader });
        else if(!strcmp(name, "#Blob")) m_locStreams.insert({ StreamType::Blob, sHeader });
        else if(!strcmp(name, "#GUID")) m_locStreams.insert({ StreamType::Guid, sHeader });

        // find a null in 4*n aligned Name field
        while(*((curr += 4) - 1));
    }

    if(m_locStreams.empty()) return; // there's nothing to see

    // #~ stream

    curr = m_data.data() + m_locStreams[StreamType::T]->Offset;

    auto metadata = reinterpret_cast<const TablesMetadata*>(curr);
    m_heapIdxsWidth = static_cast<HeapType>(metadata->HeapSize) == HeapType::None ? HeapIdx2B : HeapIdx4B;
    curr += sizeof(TablesMetadata);

    uint64_t valid = metadata->Valid;
    auto bitvector = std::bitset<std::numeric_limits<uint64_t>::digits>{ valid };

    auto validCount = bitvector.count();
    if(validCount < 1) return;

    const uint32_t* currRow = reinterpret_cast<const uint32_t*>(curr);

    for(size_t i = 0; valid != 0; ++i)
    {
        if(valid & 1)
        {
            const uint32_t _rows = *currRow++;

            if(i == (size_t)TableType::Document) m_rowsAtDocument = _rows;
            else if(i == (size_t)TableType::MethodDebugInformation) m_rowsAtMethodDebugInfo = _rows;
        }
        valid >>= 1;
    }

    curr += sizeof(uint32_t) * validCount;
    m_posAtDocumentTable = curr;

    size_t docTableRowSize = _DocTableColSize * m_heapIdxsWidth;
    m_posAtMethodDebugInfo = curr + m_rowsAtDocument * docTableRowSize;
}

std::string PortablePdb::readDocumentNameFromBlob(uint32_t columnName)
{
    BlobData blob;
    const uint8_t* curr = initBlob(columnName, blob);
    if(blob.records < 1) return {};

    const char separator = *curr++;

    std::string name;
    while(curr < blob.endRecords)
    {
        if(!name.empty()) name.append(sizeof(char), separator);

        // Blob ::= separator part+

        size_t next = decompressUInt32(curr);
        if(next == 0) break;

        const uint8_t* currBlobAt = blob.start + next;
        uint32_t part = decompressUInt32(currBlobAt);
        if(part == 0) break;

        name.append(reinterpret_cast<const char*>(currBlobAt), part);
    }
    return name;
}

bool PortablePdb::readSequencePointsFromBlob(uint32_t offset, MethodDebugInfoTable& mdi)
{
    BlobData blob;
    const uint8_t* curr = initBlob(offset, blob);
    if(blob.records < 1) return false;

    // https://github.com/dotnet/runtime/blob/0d3a4369f5d3/docs/design/specs/PortablePdb-Metadata.md#sequence-points-blob
    auto _failIf = [](bool x, PortablePdbErrorCode code = PortablePdbErrorCode::InvalidRange)
        { if(x) throw PortablePdbException{ code }; };

    mdi.LocalSignature = decompressUInt32(curr);
    if(mdi.InitialDocument == 0)
    {
        mdi.InitialDocument = decompressUInt32(curr);
    }
    _failIf(mdi.InitialDocument == 0, PortablePdbErrorCode::InvalidDocument);

    size_t doc = mdi.InitialDocument;

    static constexpr uint32_t _Hidden = 0xfeefee; // Hidden sequence point

    size_t lastUnhidden = -1;
    while(curr < blob.endRecords)
    {
        SequencePoint p{};
        p.Document = doc;

        p.ILOffset = decompressUInt32(curr);
        _failIf(p.ILOffset > 0x20000000, PortablePdbErrorCode::InvalidILOffset);

        // multiple documents; link to another one
        if(p.ILOffset == 0 && !mdi.Points.empty())
        {
            doc = decompressUInt32(curr);
            continue;
        }

        if(!mdi.Points.empty())
        {
            p.ILOffset += mdi.Points.back().ILOffset;
        }

        p.EndLine = decompressUInt32(curr);
        p.EndColumn = (p.EndLine == 0) ? decompressUInt32(curr) : decompressInt32(curr);

        if(p.EndLine == 0 && p.EndColumn == 0)
        {
            p.StartLine = p.EndLine = _Hidden;
            mdi.Points.push_back(std::move(p));
            continue;
        }

        if(lastUnhidden == -1)
        {
            p.StartLine = decompressUInt32(curr);
            p.StartColumn = decompressUInt32(curr);
        }
        else
        {
            const auto& prev = mdi.Points.at(lastUnhidden);
            p.StartLine = prev.StartLine + decompressInt32(curr);
            p.StartColumn = prev.StartColumn + decompressInt32(curr);
        }
        _failIf(p.StartLine > 0x20000000, PortablePdbErrorCode::InvalidStartLine);

        p.EndLine += p.StartLine;
        _failIf(p.EndLine > 0x20000000, PortablePdbErrorCode::InvalidEndLine);
        _failIf(p.EndLine < p.StartLine, PortablePdbErrorCode::InvalidLines);

        p.EndColumn += p.StartColumn;
        _failIf(p.StartColumn > 0x10000 || p.EndColumn > 0x10000);

        if(p.StartLine == p.EndLine && p.StartLine != _Hidden)
        {
            _failIf(p.EndColumn < p.StartColumn, PortablePdbErrorCode::InvalidColumns);
        }

        if(p.StartLine != _Hidden) lastUnhidden = mdi.Points.size();

        mdi.Points.push_back(std::move(p));
    }
    return true;
}

// Decompress unsigned 32-bit integers. Based on compression algorithm in ECMA-335 (II.23.2 Blobs and signatures)
uint32_t PortablePdb::decompressUInt32(const uint8_t*& src)
{
    const uint32_t enc = *src & 0xC0;

    if(enc == 0xC0)
    {
        // 4-byte integer; bit 29 is always cleared; value held in bits 28 through 0
        uint32_t v = ((*src++ & 0x1F) << 24);
                 v |= (*src++ << 16);
        return   v | (*src++ << 8);
    }

    if(enc == 0x80)
    {
        // 2-byte integer; bit 14 is always cleared (value held in bits 13 through 0)
        uint32_t v = ((*src++ & 0x3F) << 8);
        return   v | *src++;
    }

    // 1-byte value lies between 0 (0x00) and 127 (0x7F) inclusive;
    // bit 7 is always cleared (value held in bits 6 through 0)
    return *src++ & 0x7F;
}

// Decompress signed 32-bit integers. Based on compression algorithm in ECMA-335 (II.23.2 Blobs and signatures)
int32_t PortablePdb::decompressInt32(const uint8_t*& src)
{
    const uint32_t enc = *src & 0xC0;

    // The original compression algorithm for signed integers rotates the value 1 bit to the left
    // this gives 0x01 (-2^6); 0x0001 (-2^13); 0x00000001 (-2^28);
    // Therefore we can decomress it using the algorithm for unsigned integers and then just correct the sign.

    // highest possible return value: 0x1FFFFFFF
    int32_t v = decompressUInt32(src);

    bool negative = (v & 1) == 1;

    v >>= 1;
    if(!negative) return v;

    if(enc == 0xC0) return v | 0xF0000000; // value held up to 28 bits
    if(enc == 0x80) return v | 0xFFFFE000; // value held up to 13 bits

    return v | 0xFFFFFFC0; // value held up to 6 bits
}