cmake_minimum_required(VERSION 3.8)

project(Play_With_Algorithm_Interview)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(leetcode)

aux_source_directory(. SOURCE_FILES)

add_executable(Play_With_Algorithm_Interview ${SOURCE_FILES})

target_link_libraries(Play_With_Algorithm_Interview leetcode)