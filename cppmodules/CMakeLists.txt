cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)


project(SphereRender VERSION 0.1)


set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "bin")

include_directories(utils/include)
add_subdirectory(utils)

add_executable(
  SphereRender
  SphereRender/main.cpp
  )


target_include_directories(SphereRender PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/utils"
                          )
target_link_libraries(SphereRender PUBLIC utils)