cmake_minimum_required(VERSION 3.14)
project(file_checker)

# find_package(Python3 REQUIRED COMPONENTS Interpreter Development)

set(CMAKE_CXX_STANDARD 17)

find_package(Python3 COMPONENTS Interpreter Development REQUIRED)
find_package(pybind11 CONFIG REQUIRED)

pybind11_add_module(file_checker file_checker.cpp python_wrapper.cpp)

install(TARGETS file_checker DESTINATION ${CMAKE_SOURCE_DIR}/dist)
