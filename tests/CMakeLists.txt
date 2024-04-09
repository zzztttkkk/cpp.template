file(GLOB_RECURSE all_lib_source ${CMAKE_SOURCE_DIR}/src/**/*.cpp;${CMAKE_SOURCE_DIR}/src/*.cpp)
aux_source_directory(. all_test)

foreach (item ${all_test})
    get_filename_component(name ${item} NAME_WE)

    set(name "TestFor${name}")
    add_executable(${name} ${all_lib_source};${item})

    target_include_directories(${name} PUBLIC "${CMAKE_SOURCE_DIR}/include")
    link_libs(${name})
endforeach ()
