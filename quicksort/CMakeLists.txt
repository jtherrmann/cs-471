cmake_minimum_required(VERSION 3.17)
project(quicksort)

set(CMAKE_CXX_STANDARD 20)

add_executable(quicksort main.cpp quicksort.cpp quicksort.h)