cmake_minimum_required(VERSION 3.15)
project(GreedySnake)

set(CMAKE_CXX_STANDARD 14)

add_executable(GreedySnake main.cpp controller.h controller.cpp food.h food.cpp utils.h snake.h utils.cpp snake.cpp)