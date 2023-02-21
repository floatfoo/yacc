#include "SystemObject.hpp"

namespace yacc {

// default getters
std::string_view SystemObject::name() const noexcept { return name_of_obj; }

std::size_t SystemObject::size() const noexcept { return size_of_obj; }

std::filesystem::path SystemObject::location() const noexcept {
  return location_in_filesystem;
}

void SystemObject::rename(const std::string_view name) noexcept {
  name_of_obj = name;
}

void SystemObject::move(const std::filesystem::path& path) noexcept {
  location_in_filesystem = path;
}

// default destructor implemention
SystemObject::~SystemObject() {}

}  // namespace yacc
