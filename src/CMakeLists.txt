cmake_minimum_required(VERSION 3.22)


project(SphereRender)

add_executable(SphereRender main.cpp)


set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "bin")

target_include_directories(
  SphereRender PUBLIC
  "${PROJECT_BINARY_DIR}"
  "${PROJECT_SOURCE_DIR}/ComputationalEngine"
  )