cmake_minimum_required(VERSION 3.10)

# Set the name of the executable
set(EXECUTABLE_NAME net-cpp)
project(${EXECUTABLE_NAME})

# Gather source and header files
file(GLOB SRCS src/*.cpp)
file(GLOB HEADERS src/include/*.hpp)

# Create the executable
add_executable(${EXECUTABLE_NAME} ${SRCS} ${HEADERS})

# Set the output directory for the executable
set_target_properties(${EXECUTABLE_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)

# Add include directory so headers can be found
target_include_directories(${EXECUTABLE_NAME} PRIVATE src/include)
