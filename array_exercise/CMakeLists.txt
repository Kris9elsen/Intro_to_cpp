cmake_minimum_required(VERSION 3.10)

project(ArrayExample)

set(CMAKE_CXX_STANDARD 11)

# Add all the source files (including Array.cpp)
add_executable(array src/main.cpp src/Array.cpp)