cmake_minimum_required(VERSION 4.0)
project(C_studying C)

set(CMAKE_C_STANDARD 11)

add_executable(C_studying main.c
        "Lectures/Lesson 7/Task1.c"
        "Lectures/Lesson 7/Task2.c"
        Homeworks/Hw2/Task1.c
        "Lectures/Lesson 7/Task3.c")
