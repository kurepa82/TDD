cmake_minimum_required(VERSION 3.10)

project(MiProyecto)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(test_operaciones test_operaciones.cpp operaciones.cpp)