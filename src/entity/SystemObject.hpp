#include <filesystem>
#include <string>
#include <string_view>

namespace yacc {
// Abstruct base class for all
// system objects
class SystemObject {
 public:
  // getters
  virtual std::string_view name() const noexcept;
  virtual std::size_t size() const noexcept;
  virtual std::filesystem::path location() const noexcept;

  // rename an object
  virtual void rename(std::string_view name) noexcept;
  virtual void move(const std::filesystem::path& path) noexcept;

  virtual ~SystemObject() = 0;

 protected:
  std::string name_of_obj;
  std::size_t size_of_obj;
  std::filesystem::path location_in_filesystem;
};

}  // namespace yacc
