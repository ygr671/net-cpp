cmake_minimum_required(VERSION 3.25)

# Project name and version
project(net-cpp VERSION 1.0 LANGUAGES CXX)

# C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# compile_commands.json generation
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Modules
add_subdirectory(src/network)
# add_subdirectory(src/core)
# add_subdirectory(src/utils)

# Optional : compile examples
add_subdirectory(src/examples)


# Executable
add_executable(${PROJECT_NAME} src/main.cpp)

# Output binary to bin/
set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# Linking libraries (core, network, utils)
target_link_libraries(${PROJECT_NAME} PRIVATE network) #core utils)
