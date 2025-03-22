// Portable PDB short implementation without RTTI requirements, specially for https://github.com/3F/coreclr
// Copyright (c) 2016-2025  Denis Kuzmin <x-3F@outlook.com> github/3F
//
#pragma once
#ifndef PORTABLE_PDB_3F_IMPL
#define PORTABLE_PDB_3F_IMPL

#include <limits>
#include <vector>
#include <memory>
#include <string>
#include <fstream>
#include <bitset>
#include <array>
#include <map>
#include <guiddef.h>

namespace io::github::_3F::coreclr
{
    enum class PortablePdbErrorCode
    {
        FailedReadFile = 100,
        InvalidPdbFormat = 200,

        InvalidRange = 250,
        InvalidLines = 252,
        InvalidColumns = 253,
        InvalidILOffset = 254,
        InvalidStartLine = 255,
        InvalidStartColumn = 256,
        InvalidEndLine = 257,
        InvalidEndColumn = 258,
        InvalidDocument = 259,

        IncorrectOffset = 400,
        OffsetHigherThanBlob = 401
    };

    class PortablePdbException
    {
    public:
        const PortablePdbErrorCode code;

        PortablePdbException(PortablePdbErrorCode code)
            : code(code) { };

        ~PortablePdbException() = default;
    };

    class PortablePdb final
    {
    public:

        struct PortablePdbHeader
        {
            uint32_t Magic;
            uint16_t MajorVersion;
            uint16_t MinorVersion;
            uint32_t Reserved;
            uint32_t Length; // bypass -> Version ->
            //char Version[12]{ 0 };
        };

        struct PortablePdbStreams
        {
            uint16_t Flags;
            uint16_t Streams;
        };

        struct PortablePdbStreamHeader
        {
            uint32_t Offset;
            uint32_t Size;
            //char* Name; -> 4*n align ->
        };

        struct TablesMetadata
        {
            uint32_t Reserved1;
            uint8_t MajorVersion;
            uint8_t MinorVersion;
            // Bit vector for heap sizes.
            uint8_t HeapSize;
            uint8_t Reserved2;
            // 64-bit bitvector that has a specific bit set for each table that is stored in the stream. 
            uint64_t Valid;
            uint64_t Sorted;
            // Array of n 4-byte unsigned integers indicating the number of rows for each present table (`Valid` field).
            //uint32_t Rows[];
            //T Tables[];
        };

        enum class TableType : size_t
        {
            Module = 0,
            Document = 0x30,
            MethodDebugInformation = 0x31,
        };

        enum class HeapType : uint8_t
        {
            //  indexes are 2 bytes wide
            None = 0,

            // indexes are 4 bytes wide for the heaps below:

            String = 0x01,
            Guid = 0x02,
            Blob = 0x04,
        };

        // depending on HeapType
        enum HeapIndexesWidth : size_t
        {
            HeapIdx2B = 2,
            HeapIdx4B = 4,
        };

        enum class StreamType : uint8_t
        {
            //#~
            T,
            String,
            Guid,
            Blob,
        };

        struct DocumentTable
        {
            std::string name;
            GUID lang;
        };

        // https://github.com/dotnet/runtime/blob/0d3a4369f5d3/docs/design/specs/PortablePdb-Metadata.md#sequence-point-record
        struct SequencePoint
        {
            uint32_t ILOffset;
            uint32_t StartLine;
            uint32_t StartColumn;
            uint32_t EndLine;
            uint32_t EndColumn;
            size_t Document;
        };

        // https://github.com/dotnet/runtime/blob/0d3a4369f5d3/docs/design/specs/PortablePdb-Metadata.md#header
        struct MethodDebugInfoTable
        {
            size_t LocalSignature;
            size_t InitialDocument;
            std::vector<SequencePoint> Points;
        };

        void readDocuments(std::vector<DocumentTable>& output);

        void readMethodDebugInfo(std::vector<MethodDebugInfoTable>& output);

        PortablePdb(const wchar_t* file)
            : m_heapIdxsWidth(HeapIdx2B)
        {
            std::basic_ifstream<char> pdbf{ file, std::ios_base::in | std::ios_base::binary };
            if(!pdbf) throw PortablePdbException{ PortablePdbErrorCode::FailedReadFile };

            std::copy(std::istreambuf_iterator<char>{ pdbf }, std::istreambuf_iterator<char>{}, std::back_inserter(m_data));

            parseStreams();
        }

        ~PortablePdb() = default;

    private:

        struct BlobData
        {
            const uint8_t* start;
            const uint8_t* end;
            uint32_t records;
            const uint8_t* endRecords;
        };

        const uint8_t* initBlob(uint32_t offset, BlobData& blob)
        {
            blob.start = m_data.data() + m_locStreams[StreamType::Blob]->Offset;
            blob.end = blob.start + m_locStreams[StreamType::Blob]->Size;

            if(blob.start + offset >= blob.end)
            {
                throw PortablePdbException{ PortablePdbErrorCode::OffsetHigherThanBlob };
            }

            const uint8_t* curr = blob.start;

            curr += offset;
            blob.records = decompressUInt32(curr);
            
            blob.endRecords = curr + blob.records;
            return curr;
        }

        void parseStreams();

        std::string readDocumentNameFromBlob(uint32_t columnName);

        bool readSequencePointsFromBlob(uint32_t offset, MethodDebugInfoTable& mdi);

        uint32_t decompressUInt32(const uint8_t*& src);

        int32_t decompressInt32(const uint8_t*& src);

        uint32_t readNextColumn(size_t size, const uint8_t*& src)
        {
            auto ret = (size == HeapIdx2B) ? *reinterpret_cast<const uint16_t*>(src)
                                           : *reinterpret_cast<const uint32_t*>(src);
            src += size;
            return ret;
        }

    private:

        //Document Table Columns: Name; HashAlgorithm; Hash; Language
        static constexpr size_t _DocTableColSize = 4;

        size_t m_heapIdxsWidth;

        const uint8_t* m_posAtDocumentTable = 0;
        const uint8_t* m_posAtMethodDebugInfo = 0;

        uint32_t m_rowsAtDocument = 0;
        uint32_t m_rowsAtMethodDebugInfo = 0;

        std::vector<uint8_t> m_data{};
        std::map<StreamType, const PortablePdbStreamHeader*> m_locStreams{};
    };

}

#endif // #ifndef PORTABLE_PDB_3F_IMPL