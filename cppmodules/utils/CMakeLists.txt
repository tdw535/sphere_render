project(utils)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "bin")

add_library( # Sets the name of the library.
        utils

        # Sets the library as a shared library.
        STATIC

        # Provides a relative path to your source file(s).
        src/util1.cpp
)

target_include_directories(utils PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "./include"
                          )

target_include_directories(utils PUBLIC
"${PROJECT_BINARY_DIR}"
)

target_link_libraries(utils PUBLIC)