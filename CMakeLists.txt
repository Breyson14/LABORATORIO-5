cmake_minimum_required(VERSION 3.10)
project(LABO5 C)

set(CMAKE_C_STANDARD 99)

include_directories(src)

add_executable(labo5
    src/main.c
    src/json.c
)
