#include "llvm/DebugInfo/PDB/Native/SymbolCache.h"

#include "llvm/DebugInfo/PDB/Native/DbiStream.h"
// #include "llvm/DebugInfo/PDB/Native/PDBFile.h"
// #include "llvm/DebugInfo/PDB/Native/PublicsStream.h"
// #include "llvm/DebugInfo/PDB/Native/SymbolStream.h"
 #include "llvm/DebugInfo/PDB/PDBSymbol.h"
// #include "llvm/DebugInfo/PDB/PDBSymbolCompiland.h"

using namespace llvm;
using namespace llvm::codeview;
using namespace llvm::pdb;

SymbolCache::SymbolCache(NativeSession &Session, DbiStream *Dbi)
    : Session(Session), Dbi(Dbi) {
  // Id 0 is reserved for the invalid symbol.
  Cache.push_back(nullptr);
  SourceFiles.push_back(nullptr);

  if (Dbi)
    Compilands.resize(Dbi->modules().getModuleCount());
}

std::unique_ptr<IPDBEnumSymbols>
SymbolCache::createGlobalsEnumerator(codeview::SymbolKind Kind) {
  return {};
}

SymIndexId SymbolCache::createSimpleType(TypeIndex Index,
                                         ModifierOptions Mods) const {
  return 0;
}

SymIndexId
SymbolCache::createSymbolForModifiedType(codeview::TypeIndex ModifierTI,
                                         codeview::CVType CVT) const {
  return 0;
}

SymIndexId SymbolCache::findSymbolByTypeIndex(codeview::TypeIndex Index) const {
  return 0;
}

std::unique_ptr<PDBSymbol>
SymbolCache::getSymbolById(SymIndexId SymbolId) const {
  return nullptr;
}

NativeRawSymbol &SymbolCache::getNativeSymbolById(SymIndexId SymbolId) const {
  return *Cache[SymbolId];
}

uint32_t SymbolCache::getNumCompilands() const {
  if (!Dbi)
    return 0;

  return Dbi->modules().getModuleCount();
}

SymIndexId SymbolCache::getOrCreateGlobalSymbolByOffset(uint32_t Offset) {
  return 0;
}

std::unique_ptr<IPDBSourceFile>
SymbolCache::getSourceFileById(SymIndexId FileId) const {
  assert(FileId < SourceFiles.size());

  // Id 0 is reserved.
  if (FileId == 0)
    return nullptr;

  return std::make_unique<NativeSourceFile>(*SourceFiles[FileId].get());
}

SymIndexId
SymbolCache::getOrCreateSourceFile(const FileChecksumEntry &Checksums) const {
  auto [Iter, Inserted] =
      FileNameOffsetToId.try_emplace(Checksums.FileNameOffset);
  if (!Inserted)
    return Iter->second;

  SymIndexId Id = SourceFiles.size();
  auto SrcFile = std::make_unique<NativeSourceFile>(Session, Id, Checksums);
  SourceFiles.push_back(std::move(SrcFile));
  Iter->second = Id;
  return Id;
}


