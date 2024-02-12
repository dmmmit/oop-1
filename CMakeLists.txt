cmake_minimum_required(VERSION 3.26)
project(oop_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(geometric_shapes)

add_executable(oop_1
        geometric_shapes/test.cpp
        geometric_shapes/rectangle.hpp)
