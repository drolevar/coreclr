project(xpdb)

add_definitions(-DUNICODE)
add_definitions(-D_UNICODE)

# add_definitions(-D_HAS_EXCEPTIONS=0)
# add_definitions(-DGTEST_HAS_RTTI=0)
# add_definitions(-D_CRT_SECURE_NO_DEPRECATE)
# add_definitions(-D_CRT_SECURE_NO_WARNINGS)
# add_definitions(-D_CRT_NONSTDC_NO_DEPRECATE)
# add_definitions(-D_CRT_NONSTDC_NO_WARNINGS)
# add_definitions(-D_SCL_SECURE_NO_DEPRECATE)
# add_definitions(-D_SCL_SECURE_NO_WARNINGS)
# add_definitions(-D__STDC_CONSTANT_MACROS)
# add_definitions(-D__STDC_FORMAT_MACROS)
# add_definitions(-D__STDC_LIMIT_MACROS)

add_compile_options(/wd5054)
add_compile_options(/wd4996)
add_compile_options(/wd4005)
# ildasm\NativePdb\llvm\include\llvm\Support\Windows\WindowsSupport.h(29): warning C4005: 'WIN32_LEAN_AND_MEAN': macro redefinition

add_compile_options(/wd4146)
add_compile_options(/wd4244)
add_compile_options(/wd4267)
add_compile_options(/wd4701)

add_compile_options(/std:c++latest)
# set_property(DIRECTORY PROPERTY MSVC_WARNINGS_AS_ERRORS OFF)
# set_property(DIRECTORY PROPERTY MSVC_C_CXX_WE42XX OFF)

set_property(DIRECTORY PROPERTY MSVC_WARNINGS_AS_ERRORS OFF)
set_property(DIRECTORY PROPERTY MSVC_C_CXX_WE42XX OFF)


include_directories(NativePdb/llvm/include)


# # set(CMAKE_COMPILE_WARNING_AS_ERROR OFF)
# # add_compile_options(-w)

# include_directories(NativePdb/llvm/include)

# # add_subdirectory(NativePdb)

# # add_library (PPDBReader
# #     CoreReader.cpp
# #     Streams.cpp
# #     Tables.cpp)


set(XPDB_SOURCES
    PortablePdb.cpp
    NativePdb/NativePdb.cpp
    NativePdb/llvm/Support/NativeFormatting.cpp
    NativePdb/llvm/Support/FormatVariadic.cpp
    NativePdb/llvm/BinaryFormat/Magic.cpp
    NativePdb/llvm/DebugInfo/CodeView/CodeViewError.cpp
    NativePdb/llvm/DebugInfo/CodeView/DebugChecksumsSubsection.cpp
    NativePdb/llvm/DebugInfo/CodeView/DebugFrameDataSubsection.cpp
    NativePdb/llvm/DebugInfo/CodeView/DebugLinesSubsection.cpp
    NativePdb/llvm/DebugInfo/CodeView/DebugStringTableSubsection.cpp
    NativePdb/llvm/DebugInfo/CodeView/DebugSubsection.cpp
    NativePdb/llvm/DebugInfo/CodeView/DebugSubsectionRecord.cpp
    NativePdb/llvm/DebugInfo/MSF/MappedBlockStream.cpp
    NativePdb/llvm/DebugInfo/MSF/MSFCommon.cpp
    NativePdb/llvm/DebugInfo/MSF/MSFError.cpp
    NativePdb/llvm/Support/BinaryStreamError.cpp
    NativePdb/llvm/Support/BinaryStreamReader.cpp
    NativePdb/llvm/Support/BinaryStreamRef.cpp
    NativePdb/llvm/Support/CRC.cpp
    NativePdb/llvm/Support/Error.cpp
    NativePdb/llvm/Support/ErrorHandling.cpp
    NativePdb/llvm/Support/MemAlloc.cpp
    NativePdb/llvm/Support/MemoryBuffer.cpp
    NativePdb/llvm/Support/Path.cpp
    NativePdb/llvm/Support/Process.cpp
    NativePdb/llvm/Support/raw_ostream.cpp
    NativePdb/llvm/Support/SmallVector.cpp
    NativePdb/llvm/Support/StringMap.cpp
    NativePdb/llvm/Support/StringRef.cpp
    NativePdb/llvm/Support/Twine.cpp
    NativePdb/llvm/Support/xxhash.cpp
    NativePdb/llvm/DebugInfo/PDB/IPDBSourceFile.cpp
    NativePdb/llvm/DebugInfo/PDB/PDB.cpp
    NativePdb/llvm/DebugInfo/PDB/PDBInterfaceAnchors.cpp
    NativePdb/llvm/DebugInfo/PDB/PDBSymbol.cpp
    NativePdb/llvm/DebugInfo/PDB/Native/DbiModuleDescriptor.cpp
    NativePdb/llvm/DebugInfo/PDB/Native/DbiModuleList.cpp
    NativePdb/llvm/DebugInfo/PDB/Native/DbiStream.cpp
    NativePdb/llvm/DebugInfo/PDB/Native/Hash.cpp
    NativePdb/llvm/DebugInfo/PDB/Native/HashTable.cpp
    NativePdb/llvm/DebugInfo/PDB/Native/InfoStream.cpp
    NativePdb/llvm/DebugInfo/PDB/Native/InjectedSourceStream.cpp
    NativePdb/llvm/DebugInfo/PDB/Native/ModuleDebugStream.cpp
    NativePdb/llvm/DebugInfo/PDB/Native/NativeEnumInjectedSources.cpp
    NativePdb/llvm/DebugInfo/PDB/Native/NativeSourceFile.cpp
    NativePdb/llvm/DebugInfo/PDB/Native/NamedStreamMap.cpp
    NativePdb/llvm/DebugInfo/PDB/Native/NativeSession.cpp
    NativePdb/llvm/DebugInfo/PDB/Native/PDBFile.cpp
    NativePdb/llvm/DebugInfo/PDB/Native/PDBStringTable.cpp
    NativePdb/llvm/DebugInfo/PDB/Native/RawError.cpp
    NativePdb/llvm/DebugInfo/PDB/Native/SymbolCache.cpp
)

set(XPDB_HEADERS
    # PortablePdb.h
    # xpdb.h
    # NativePdb/NativePdb.h
    NativePdb/llvm/Support/Windows/Path.inc
    NativePdb/llvm/Support/Windows/Process.inc
)

convert_to_absolute_path(XPDB_SOURCES ${XPDB_SOURCES})
convert_to_absolute_path(XPDB_HEADERS ${XPDB_HEADERS})

if (CLR_CMAKE_TARGET_WIN32)
    list(APPEND XPDB_SOURCES ${XPDB_HEADERS})
endif(CLR_CMAKE_TARGET_WIN32)


add_library_clr(xpdb OBJECT ${XPDB_SOURCES})

# # install (FILES NativePdb.cpp
# #                DESTINATION xpdb)