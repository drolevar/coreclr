//===- NativeSession.cpp - Native implementation of IPDBSession -*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "llvm/DebugInfo/PDB/Native/NativeSession.h"

#include "llvm/ADT/SmallString.h"
#include "llvm/BinaryFormat/Magic.h"
#include "llvm/DebugInfo/MSF/MappedBlockStream.h"
#include "llvm/DebugInfo/PDB/IPDBEnumChildren.h"
#include "llvm/DebugInfo/PDB/IPDBSourceFile.h"
#include "llvm/DebugInfo/PDB/Native/DbiModuleDescriptor.h"
#include "llvm/DebugInfo/PDB/Native/DbiModuleList.h"
#include "llvm/DebugInfo/PDB/Native/DbiStream.h"
#include "llvm/DebugInfo/PDB/Native/ISectionContribVisitor.h"
#include "llvm/DebugInfo/PDB/Native/ModuleDebugStream.h"
#include "llvm/DebugInfo/PDB/Native/NativeEnumInjectedSources.h"
#include "llvm/DebugInfo/PDB/Native/NativeExeSymbol.h"
#include "llvm/DebugInfo/PDB/Native/PDBFile.h"
#include "llvm/DebugInfo/PDB/Native/RawConstants.h"
#include "llvm/DebugInfo/PDB/Native/RawError.h"
#include "llvm/DebugInfo/PDB/Native/RawTypes.h"
#include "llvm/DebugInfo/PDB/Native/SymbolCache.h"
#include "llvm/DebugInfo/PDB/PDBSymbol.h"
#include "llvm/DebugInfo/PDB/PDBSymbolCompiland.h"
#include "llvm/DebugInfo/PDB/PDBSymbolExe.h"
#include "llvm/Object/Binary.h"
#include "llvm/Object/COFF.h"
#include "llvm/Support/Allocator.h"
#include "llvm/Support/BinaryByteStream.h"
#include "llvm/Support/BinaryStreamArray.h"
#include "llvm/Support/Error.h"
#include "llvm/Support/ErrorOr.h"
#include "llvm/Support/MemoryBuffer.h"
#include "llvm/Support/Path.h"

#include <cassert>
#include <memory>
#include <utility>

using namespace llvm;
using namespace llvm::msf;
using namespace llvm::pdb;

namespace llvm {
namespace codeview {
union DebugInfo;
}
} // namespace llvm

static DbiStream *getDbiStreamPtr(PDBFile &File) {
  Expected<DbiStream &> DbiS = File.getPDBDbiStream();
  if (DbiS)
    return &DbiS.get();

  consumeError(DbiS.takeError());
  return nullptr;
}

NativeSession::NativeSession(std::unique_ptr<PDBFile> PdbFile,
                             std::unique_ptr<BumpPtrAllocator> Allocator)
    : Pdb(std::move(PdbFile)), Allocator(std::move(Allocator)),
      Cache(*this, getDbiStreamPtr(*Pdb)) {}

NativeSession::~NativeSession() = default;

static Expected<std::unique_ptr<PDBFile>>
loadPdbFile(StringRef PdbPath, std::unique_ptr<BumpPtrAllocator> &Allocator) {
  ErrorOr<std::unique_ptr<MemoryBuffer>> ErrorOrBuffer =
      MemoryBuffer::getFile(PdbPath, /*IsText=*/false,
                            /*RequiresNullTerminator=*/false);
  if (!ErrorOrBuffer)
    return make_error<RawError>(ErrorOrBuffer.getError());
  std::unique_ptr<llvm::MemoryBuffer> Buffer = std::move(*ErrorOrBuffer);

  PdbPath = Buffer->getBufferIdentifier();
  file_magic Magic;
  auto EC = identify_magic(PdbPath, Magic);
  if (EC || Magic != file_magic::pdb)
    return make_error<RawError>(EC);

  auto Stream = std::make_unique<MemoryBufferByteStream>(
      std::move(Buffer), llvm::endianness::little);

  auto File = std::make_unique<PDBFile>(PdbPath, std::move(Stream), *Allocator);
  if (auto EC = File->parseFileHeaders())
    return std::move(EC);

  if (auto EC = File->parseStreamData())
    return std::move(EC);

  return std::move(File);
}

Error NativeSession::createFromPdbPath(StringRef PdbPath,
                                       std::unique_ptr<IPDBSession> &Session) {
  auto Allocator = std::make_unique<BumpPtrAllocator>();
  auto PdbFile = loadPdbFile(PdbPath, Allocator);
  if (!PdbFile)
    return PdbFile.takeError();

  Session = std::make_unique<NativeSession>(std::move(PdbFile.get()),
                                            std::move(Allocator));
  return Error::success();
}

std::unique_ptr<IPDBEnumInjectedSources>
NativeSession::getInjectedSources() const {
  auto ISS = Pdb->getInjectedSourceStream();
  if (!ISS) {
    consumeError(ISS.takeError());
    return nullptr;
  }
  auto Strings = Pdb->getStringTable();
  if (!Strings) {
    consumeError(Strings.takeError());
    return nullptr;
  }
  return std::make_unique<NativeEnumInjectedSources>(*Pdb, *ISS, *Strings);
}

Expected<ModuleDebugStreamRef>
NativeSession::getModuleDebugStream(uint32_t Index) const {
  auto *Dbi = getDbiStreamPtr(*Pdb);
  assert(Dbi && "Dbi stream not present");

  DbiModuleDescriptor Modi = Dbi->modules().getModuleDescriptor(Index);

  uint16_t ModiStream = Modi.getModuleStreamIndex();
  if (ModiStream == kInvalidStreamIndex)
    return make_error<RawError>("Module stream not present");

  std::unique_ptr<msf::MappedBlockStream> ModStreamData =
      Pdb->createIndexedStream(ModiStream);

  ModuleDebugStreamRef ModS(Modi, std::move(ModStreamData));
  if (auto EC = ModS.reload())
    return std::move(EC);

  return std::move(ModS);
}
