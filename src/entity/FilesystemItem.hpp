#include "SystemObject.hpp"

namespace yacc {
  // this class describe objects in a file system
  // every one of them knows it's parent
  class FilesystemItem: public SystemObject {
    FilesystemItem* parent() const noexcept;

    virtual ~FilesystemItem() = 0;
  private:
    FilesystemItem* parent_directory;
  };

}
