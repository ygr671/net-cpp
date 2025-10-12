# Collect source files
file(GLOB source_files ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

# Create the library
add_library(network ${source_files})

# Include directory for headers
target_include_directories(network PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)