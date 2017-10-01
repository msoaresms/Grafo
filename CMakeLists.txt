cmake_minimum_required(VERSION 3.8)
project(Grafo)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp No.h Lista.h Grafo.cpp Grafo.h)
add_executable(Grafo ${SOURCE_FILES})