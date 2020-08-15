cmake_minimum_required(VERSION 3.15)
project(cpp)

set(CMAKE_CXX_STANDARD 11)

add_executable(cpp main.cpp Line.h Line.cpp Box.cpp Box.h inherit/Shape.cpp inherit/Shape.h inherit/Rectangle.cpp inherit/Rectangle.h inherit/PaintCost.cpp inherit/PaintCost.h  StackC.cpp StackC.h  )
