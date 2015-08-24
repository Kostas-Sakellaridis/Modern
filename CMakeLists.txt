cmake_minimum_required(VERSION 3.2)
project (Modern)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c99")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall  -std=c99")

#set(SOURCE_FILES main.c)

add_executable(proto proto.c)
add_executable(tester chapter1/test1.c)
add_executable(test3 chapter3/test.c)
add_executable(addfrac chapter3/addfrac.c)
add_executable(exercises chapter3/excercises.c)
add_executable(test4 chapter4/test4.c)
add_executable(excercises4 chapter4/exercises4.c)
add_executable(test5 chapter5/test.c)