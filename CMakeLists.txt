cmake_minimum_required(VERSION 3.6)
project(Test_Files)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES integer.h integer.c real.h real.c string.h string.c test.c test-int.c)
add_executable(Test_Files ${SOURCE_FILES})