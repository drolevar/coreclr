//===- HashTable.cpp - PDB Hash Table -------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "llvm/DebugInfo/PDB/Native/HashTable.h"
#include "llvm/DebugInfo/PDB/Native/RawError.h"
#include "llvm/Support/BinaryStreamReader.h"
#include "llvm/Support/Error.h"
#include "llvm/Support/MathExtras.h"
#include <cstdint>
#include <utility>

using namespace llvm;
using namespace llvm::pdb;

Error llvm::pdb::readSparseBitVector(BinaryStreamReader &Stream,
                                     SparseBitVector<> &V) {
  uint32_t NumWords;
  if (auto EC = Stream.readInteger(NumWords))
    return joinErrors(
        std::move(EC),
        make_error<RawError>(raw_error_code::corrupt_file,
                             "Expected hash table number of words"));

  for (uint32_t I = 0; I != NumWords; ++I) {
    uint32_t Word;
    if (auto EC = Stream.readInteger(Word))
      return joinErrors(std::move(EC),
                        make_error<RawError>(raw_error_code::corrupt_file,
                                             "Expected hash table word"));
    for (unsigned Idx = 0; Idx < 32; ++Idx)
      if (Word & (1U << Idx))
        V.set((I * 32) + Idx);
  }
  return Error::success();
}


