#include "SystemObject.hpp"
#include "FilesystemItem.hpp"

namespace yacc {
using namespace std::literals::string_view_literals;
// File is an system object
// which may contains text
//
// File may be described by extension
class File : public FilesystemItem {
  File(std::string_view name, std::string_view content = ""sv);

  // rename whole name with possible extension changing
  virtual void rename(std::string_view name) noexcept override;
  std::string_view extension() const noexcept;

  // gets privete Directory
  virtual FilesystemItem* parent_directory() const noexcept override;

 private:
  std::string context;
  Directory parent_dir;
};
}  // namespace yacc
