//===- PDB.cpp - base header file for creating a PDB reader ---------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "llvm/DebugInfo/PDB/PDB.h"
#include "llvm/ADT/StringRef.h"
#include "llvm/Config/config.h"
#include "llvm/DebugInfo/PDB/GenericError.h"
#if LLVM_ENABLE_DIA_SDK
#include "llvm/DebugInfo/PDB/DIA/DIASession.h"
#endif
#include "llvm/DebugInfo/PDB/Native/NativeSession.h"
#include "llvm/Support/Error.h"

using namespace llvm;
using namespace llvm::pdb;

Error llvm::pdb::loadDataForPDB(PDB_ReaderType Type, StringRef Path,
                                std::unique_ptr<IPDBSession> &Session) {
    return NativeSession::createFromPdbPath(Path, Session);
}
