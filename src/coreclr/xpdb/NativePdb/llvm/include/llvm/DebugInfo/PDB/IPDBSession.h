//===- IPDBSession.h - base interface for a PDB symbol context --*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_DEBUGINFO_PDB_IPDBSESSION_H
#define LLVM_DEBUGINFO_PDB_IPDBSESSION_H

#include "PDBSymbol.h"
#include "PDBTypes.h"
#include "llvm/ADT/StringRef.h"
#include "llvm/Support/Casting.h"
#include <memory>

namespace llvm {
namespace pdb {
class PDBSymbolCompiland;
class PDBSymbolExe;

/// IPDBSession defines an interface used to provide a context for querying
/// debug information from a debug data source (for example, a PDB).
class IPDBSession {
public:
  virtual ~IPDBSession();


  template <typename T>
  std::unique_ptr<T> getConcreteSymbolById(SymIndexId SymbolId) const {
    return {};
  }


  virtual std::unique_ptr<IPDBEnumInjectedSources>
  getInjectedSources() const = 0;

};
} // namespace pdb
} // namespace llvm

#endif
