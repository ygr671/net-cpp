cmake_minimum_required(VERSION 3.16)

# Project name and version
project(net-cpp VERSION 1.0 LANGUAGES CXX)

# C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Name of the executable
set(EXECUTABLE_NAME net-cpp)

# Gather all .cpp files recursively
file(GLOB_RECURSE SRCS CONFIGURE_DEPENDS ${CMAKE_SOURCE_DIR}/src/*.cpp)

# Exclude example file compilation
list(FILTER SRCS EXCLUDE REGEX "src/examples/.*\\.cpp$")

# Create the executable
add_executable(${EXECUTABLE_NAME} ${SRCS})

# Include directories (for headers)
target_include_directories(${EXECUTABLE_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/src/include)

# Set output directory for binaries
set_target_properties(${EXECUTABLE_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Optional : warnings and strict flags
target_compile_options(${EXECUTABLE_NAME} PRIVATE -Wall -Wextra -pedantic -Werror)

# Optional : enable folders in IDEs
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
