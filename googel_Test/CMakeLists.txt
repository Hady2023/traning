cmake_minimum_required(VERSION 3.10)
project(MyProject)

# GoogleTest
add_subdirectory(external/googletest)

# Project source
include_directories(include)
add_library(my_lib src/math.cpp)

# Tests
add_executable(my_tests tests/test_math.cpp)
target_link_libraries(my_tests my_lib gtest gtest_main pthread)
