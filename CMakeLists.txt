cmake_minimum_required(VERSION 3.0.0)
project(cpp_practice VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

enable_testing()

add_subdirectory(Exercises)
add_subdirectory(Tests)
