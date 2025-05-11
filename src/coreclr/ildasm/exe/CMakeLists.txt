project(ildasm)

add_definitions(-DUNICODE)
add_definitions(-D_UNICODE)
add_definitions(-D_FEATURE_NO_HOST)
add_definitions(-D__ILDASM__)

set(XPDB_PATH ../../xpdb)
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
add_compile_options(/wd4146)
add_compile_options(/wd4244)
add_compile_options(/wd4267)
add_compile_options(/wd4701)

add_definitions(-DFEATURE_CORECLR)

add_compile_options(/std:c++latest)
# set_property(DIRECTORY ${XPDB_PATH} PROPERTY MSVC_WARNINGS_AS_ERRORS OFF)
# set_property(DIRECTORY ${XPDB_PATH} PROPERTY MSVC_C_CXX_WE42XX OFF)
set_property(DIRECTORY PROPERTY MSVC_WARNINGS_AS_ERRORS OFF)
set_property(DIRECTORY PROPERTY MSVC_C_CXX_WE42XX OFF)

include_directories(..)
include_directories(${XPDB_PATH})
include_directories(${XPDB_PATH}/NativePdb/llvm/include)

if(CLR_CMAKE_HOST_UNIX)
    build_resources(${CMAKE_CURRENT_SOURCE_DIR}/../dasm.rc dasm_rc TARGET_CPP_FILE)

    set(ILDASM_RESOURCES
        ${TARGET_CPP_FILE}
    )
else()
    set(ILDASM_RESOURCES ../dasm.rc)
    add_definitions(-DFX_VER_INTERNALNAME_STR=ildasm.exe)
endif(CLR_CMAKE_HOST_UNIX)

set(ILDASM_SOURCES
    ../ceeload.cpp
    ../dasm.cpp
    ../dasm_formattype.cpp
    ../dasm_mi.cpp
    ../dasm_sz.cpp
    ../dis.cpp
    ../dman.cpp
    ../dres.cpp
    ../ildasmpch.cpp
    ../windasm.cpp
    ${XPDB_PATH}/PortablePdb.cpp
    ${XPDB_PATH}/NativePdb/NativePdb.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/NativeFormatting.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/FormatVariadic.cpp
    ${XPDB_PATH}/NativePdb/llvm/BinaryFormat/Magic.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/CodeView/CodeViewError.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/CodeView/DebugChecksumsSubsection.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/CodeView/DebugFrameDataSubsection.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/CodeView/DebugLinesSubsection.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/CodeView/DebugStringTableSubsection.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/CodeView/DebugSubsection.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/CodeView/DebugSubsectionRecord.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/MSF/MappedBlockStream.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/MSF/MSFCommon.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/MSF/MSFError.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/BinaryStreamError.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/BinaryStreamReader.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/BinaryStreamRef.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/CRC.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/Error.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/ErrorHandling.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/MemAlloc.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/MemoryBuffer.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/Path.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/Process.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/raw_ostream.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/SmallVector.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/StringMap.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/StringRef.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/Twine.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/xxhash.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/IPDBSourceFile.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/PDB.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/PDBInterfaceAnchors.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/PDBSymbol.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/Native/DbiModuleDescriptor.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/Native/DbiModuleList.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/Native/DbiStream.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/Native/Hash.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/Native/HashTable.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/Native/InfoStream.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/Native/InjectedSourceStream.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/Native/ModuleDebugStream.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/Native/NativeEnumInjectedSources.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/Native/NativeSourceFile.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/Native/NamedStreamMap.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/Native/NativeSession.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/Native/PDBFile.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/Native/PDBStringTable.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/Native/RawError.cpp
    ${XPDB_PATH}/NativePdb/llvm/DebugInfo/PDB/Native/SymbolCache.cpp
    ${XPDB_PATH}/NativePdb/llvm/Support/Windows/Path.inc
    ${XPDB_PATH}/NativePdb/llvm/Support/Windows/Process.inc
)

set(ILDASM_HEADERS
    ../ceeload.h
    ../dasm_sz.h
    ../dis.h
    ../dynamicarray.h
    ../ildasmpch.h
    ../resource.h
    ../util.hpp
)

if (CLR_CMAKE_TARGET_WIN32)
    list(APPEND ILDASM_SOURCES ${ILDASM_HEADERS})
endif(CLR_CMAKE_TARGET_WIN32)

if(CLR_CMAKE_HOST_LINUX OR CLR_CMAKE_HOST_FREEBSD OR CLR_CMAKE_HOST_NETBSD OR CLR_CMAKE_HOST_SUNOS OR CLR_CMAKE_HOST_HAIKU)
    # This option is necessary to ensure that the overloaded delete operator defined inside
    # of the utilcode will be used instead of the standard library delete operator.
    set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Xlinker -Bsymbolic")

    # The following linked options can be inserted into the linker libraries list to
    # ensure proper resolving of circular references between a subset of the libraries.
    set(START_LIBRARY_GROUP -Wl,--start-group)
    set(END_LIBRARY_GROUP -Wl,--end-group)
endif(CLR_CMAKE_HOST_LINUX OR CLR_CMAKE_HOST_FREEBSD OR CLR_CMAKE_HOST_NETBSD OR CLR_CMAKE_HOST_SUNOS OR CLR_CMAKE_HOST_HAIKU)

add_executable_clr(ildasm
    ${ILDASM_SOURCES}
    ${ILDASM_RESOURCES}
)

set(ILDASM_LINK_LIBRARIES
    ${START_LIBRARY_GROUP} # Start group of libraries that have circular references
    utilcodestaticnohost
    mdcompiler_wks
    mdruntime_wks
    mdruntimerw_wks
    mdstaticapi
    ${END_LIBRARY_GROUP} # End group of libraries that have circular references
    corguids
)

if(CLR_CMAKE_HOST_WIN32)
    list(APPEND ILDASM_LINK_LIBRARIES
        ${STATIC_MT_CRT_LIB}
        ${STATIC_MT_VCRT_LIB}
        kernel32.lib
        advapi32.lib
        ole32.lib
        oleaut32.lib
        uuid.lib
        user32.lib
        version.lib
        shlwapi.lib
        bcrypt.lib
        RuntimeObject.lib
        coreclrminipal
    )
else()
    list(APPEND ILDASM_LINK_LIBRARIES
        coreclrpal
        mscorrc
        palrt
        coreclrminipal
    )
endif(CLR_CMAKE_HOST_WIN32)

if(CLR_CMAKE_HOST_UNIX)
    target_link_libraries(ildasm
        PRIVATE
        ${ILDASM_LINK_LIBRARIES}
        mscorrc
        coreclrpal
        palrt
        ${CMAKE_DL_LIBS}
    )
else()
    target_link_libraries(ildasm
        PRIVATE
        ${ILDASM_LINK_LIBRARIES}
        ole32
        oleaut32
        shell32
    )
endif(CLR_CMAKE_HOST_UNIX)

install_clr(TARGETS ildasm DESTINATIONS . COMPONENT iltools)
