cmake_minimum_required(VERSION 3.20)

project(Person_Dato_Bil LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(person_dato_bil main.cpp Dato.cpp Person.cpp Bil.cpp)

