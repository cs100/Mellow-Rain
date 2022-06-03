cmake_minimum_required(VERSION 3.17)
project(CS100_Project)

add_subdirectory(googletest)

add_executable(CS100_Project main.cpp Character.cpp Character.h attack.hpp attackRange.hpp attackRange.cpp attackValue.hpp attackValue.cpp heal.hpp healRange.hpp healRange.cpp healValue.hpp healValue.cpp TextDisplay.hpp TextDisplay.cpp)

add_executable(test test.cpp Character.h Character.cpp attack.hpp attackRange.hpp attackRange.cpp attackValue.hpp attackValue.cpp heal.hpp healRange.hpp healRange.cpp healValue.hpp healValue.cpp TextDisplay.hpp TextDisplay.cpp)

target_link_libraries(test gtest)
