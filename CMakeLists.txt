cmake_minimum_required(VERSION 4.0)
project(C-ALL)

set(CMAKE_CXX_STANDARD 26)

add_executable(C-ALL main.cpp
        compiler.h
        compiler.cpp
        transformer.h
        transformer.cpp
        output_file.cpp
        output_file.h
)
