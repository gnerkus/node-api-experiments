cmake_minimum_required(VERSION 3.21)

# Name of the project (will be the name of the plugin)
project (addon)

set(CMAKE_CXX_STANDARD 20)

# Don't add this line if you will try_compile with boost.
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(BINARY ${CMAKE_PROJECT_NAME})

set(SOURCES example.cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

set(CMAKE_BUILD_TYPE Release)

# Essential include files to build a node addon,
# you should add this line in every CMake.js based project.
include_directories(
  ${PROJECT_SOURCE_DIR}/include/
)

add_executable(${BINARY} ${SOURCES})

add_subdirectory(src)
