cmake_minimum_required(VERSION 3.24)
project(yacc)

set(CMAKE_CXX_STANDARD 20)

add_compile_options(-Wall -Wextra -Werror -pedantic -g -pg -O0 -std=c++2a)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR})
file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
enable_testing()

add_executable(${PROJECT_NAME}
  ${SRC_FILES} src/entity/SystemObject.hpp)
