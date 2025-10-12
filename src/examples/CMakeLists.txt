# Collect source files
file(GLOB source_files ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

foreach(file ${source_files})
    get_filename_component(executable_name ${file} NAME_WE)
    add_executable(${executable_name} ${file})
    # target_link_libraries(${executable_name} PRIVATE core)
    target_link_libraries(${executable_name} PRIVATE network)
    # target_link_libraries(${executable_name} PRIVATE utils)
    set_target_properties(${executable_name} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin/examples)
endforeach ()