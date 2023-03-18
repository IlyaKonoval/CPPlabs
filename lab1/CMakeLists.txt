cmake_minimum_required(VERSION 3.24)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp laba1/complex.cpp laba1/complex.h laba1/MatrixMulti.cpp laba1/MatrixMulti.h laba1/ADD.cpp laba1/ADD.h laba1/change_sign.cpp laba1/change_sign.h Tests.cpp Tests.h)
