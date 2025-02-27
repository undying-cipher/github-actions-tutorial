project("CBASample" LANGUAGES CXX)
message(STATUS "Project name is ${PROJECT_NAME}")

# INFO: Require C++23 standard
set(CMAKE_CXX_STANDDARD 23)
set(CMAKE_CXX_STANDDARD_REQUIRED ON)

# INFO: Basic compiler compliance & safety checks
add_compile_options(
    -Wall                     # Common warnings
    -Wextra                   # Extra warnings
    -pedantic                 # Strict standards compliance
    -Werror                   # Warnings as errors
)

# INFO: Generate compile commands JSON
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# INFO: Include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# INFO: Subdirectories
subdirs(src/cpp)

# INFO: Google tests
subdirs(lib/external/googletest tests)
enable_testing()

# TODO: Google tests

# TODO: GLog

