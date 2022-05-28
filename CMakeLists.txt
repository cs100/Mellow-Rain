cmake_minimum_required(VERSION 3.20)
project(CS100_Project)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(googletest)

add_executable(CS100_Project main.cpp Character.cpp Character.h)

add_executable(test test.cpp Character.h Character.cpp attack.hpp attack.cpp)

target_link_libraries(test gtest)