cmake_minimum_required(VERSION 3.23)
project(annuaire)

set(CMAKE_CXX_STANDARD 14)

add_executable(annuaire main.cpp headers/Students.cpp headers/Students.h)
