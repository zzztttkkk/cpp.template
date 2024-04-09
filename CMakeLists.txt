cmake_minimum_required(VERSION "3.5")

project("cpp.template")

set(CMAKE_CXX_STANDARD 20)

set(Libs "")

if (${CMAKE_BUILD_TYPE} STREQUAL Debug)
    add_definitions(-DDEBUG)
endif ()

if (${MSVC})
    add_compile_options(/utf-8 /wd4005)
endif ()


enable_testing()

find_package(fmt CONFIG REQUIRED)
find_package(GTest CONFIG REQUIRED)

set(Libs "${Libs};fmt::fmt-header-only")
set(Libs "${Libs};GTest::gmock;GTest::gtest;GTest::gmock_main;GTest::gtest_main")

function(link_libs name)
    target_link_libraries(${name} PUBLIC ${Libs})
endfunction()

add_subdirectory(./tests)
