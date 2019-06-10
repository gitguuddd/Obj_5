cmake_minimum_required(VERSION 3.13)
project(OOP5)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS -O3)

add_executable(OOP5 main.cpp Code/Wordinfo/Wordinfo.h Code/Wordinfo/Wordinfo.cpp Code/funcs.cpp Code/funcs.h)