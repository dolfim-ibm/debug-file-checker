cmake_minimum_required(VERSION 3.14)
project(file_checker)

# find_package(Python3 REQUIRED COMPONENTS Interpreter Development)

set(CMAKE_CXX_STANDARD 17)

# # Use pybind11 headers directly from pip site-packages
# execute_process(
#     COMMAND ${Python3_EXECUTABLE} -m pybind11 --includes
#     OUTPUT_VARIABLE PYBIND11_INCLUDES
#     OUTPUT_STRIP_TRAILING_WHITESPACE
# )

# separate_arguments(PYBIND11_INCLUDES)

# add_library(file_checker_module MODULE file_checker.cpp python_wrapper.cpp)
# target_include_directories(file_checker_module PRIVATE ${PYBIND11_INCLUDES})

# # Rename the module output file properly for Python to import
# set_target_properties(file_checker_module PROPERTIES PREFIX "" OUTPUT_NAME "file_checker")

find_package(Python COMPONENTS Interpreter Development REQUIRED)
find_package(pybind11 CONFIG REQUIRED)

pybind11_add_module(file_checker file_checker.cpp python_wrapper.cpp)

install(TARGETS file_checker DESTINATION ${CMAKE_SOURCE_DIR}/dist)
