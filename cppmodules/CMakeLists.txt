cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Eigen3 3.3 REQUIRED NO_MODULE)

project(SphereRenderer VERSION 0.1)


# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "lib")
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "lib")
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "bin")

add_subdirectory(Utils)



add_executable(
  SphereRenderer
  SphereRender/main.cpp
  )

target_link_libraries(SphereRenderer PUBLIC Utils Eigen3::Eigen)


target_include_directories(SphereRenderer PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/Utils"
                          )
