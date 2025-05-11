//===- NativeSession.h - Native implementation of IPDBSession ---*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_DEBUGINFO_PDB_NATIVE_NATIVESESSION_H
#define LLVM_DEBUGINFO_PDB_NATIVE_NATIVESESSION_H

//#include "llvm/ADT/IntervalMap.h"
#include "llvm/ADT/StringRef.h"
#include "llvm/DebugInfo/PDB/IPDBSession.h"
#include "llvm/DebugInfo/PDB/Native/SymbolCache.h"
#include "llvm/DebugInfo/PDB/PDBTypes.h"
#include "llvm/Support/Allocator.h"
#include "llvm/Support/Error.h"

namespace llvm {
class MemoryBuffer;
namespace pdb {
class PDBFile;
class NativeExeSymbol;
class IPDBSourceFile;
class ModuleDebugStreamRef;
class PDBSymbol;
class PDBSymbolCompiland;
class PDBSymbolExe;
template <typename ChildType> class IPDBEnumChildren;

class NativeSession : public IPDBSession {
  struct PdbSearchOptions {
    StringRef ExePath;
    // FIXME: Add other PDB search options (_NT_SYMBOL_PATH, symsrv)
  };

public:
  NativeSession(std::unique_ptr<PDBFile> PdbFile,
                std::unique_ptr<BumpPtrAllocator> Allocator);
  ~NativeSession() override;

  static Error createFromPdbPath(StringRef PdbPath,
                                 std::unique_ptr<IPDBSession> &Session);

  std::unique_ptr<IPDBEnumInjectedSources> getInjectedSources() const override;

  PDBFile &getPDBFile() { return *Pdb; }
  const PDBFile &getPDBFile() const { return *Pdb; }

  SymbolCache &getSymbolCache() { return Cache; }
  const SymbolCache &getSymbolCache() const { return Cache; }  
  
  Expected<ModuleDebugStreamRef> getModuleDebugStream(uint32_t Index) const;

private:

  std::unique_ptr<PDBFile> Pdb;
  std::unique_ptr<BumpPtrAllocator> Allocator;

  SymbolCache Cache;
  SymIndexId ExeSymbol = 0;
  uint64_t LoadAddress = 0;

};
} // namespace pdb
} // namespace llvm

#endif
