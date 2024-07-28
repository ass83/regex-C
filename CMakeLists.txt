cmake_minimum_required(VERSION 3.28)
project(C)

set(CMAKE_C_STANDARD 11)

add_library(STATIC main.c)
add_executable(tt main.c regex_my.c)
add_executable(main main.c)