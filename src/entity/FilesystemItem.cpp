#include "FilesystemItem.hpp"

namespace yacc {
FilesystemItem* FilesystemItem::parent() const noexcept {
  return parent_directory;
}

FilesystemItem::~FilesystemItem() {}
}  // namespace yacc
