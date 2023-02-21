#include "SystemObject.hpp"
#include "FilesystemItem.hpp"

namespace yacc {
  class Directory: public SystemObject, public FilesystemItem {
    virtual Directory parent_directory() const noexcept override;
  private:
    Directory parent_dir;
  };
}
