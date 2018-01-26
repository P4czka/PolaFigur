CMake_minimum_required (VERSION 2.6)

project(Figury)

set(EXECUTABLE_NAME "AreaCalculator")
add_executable(${EXECUTABLE_NAME} main.cpp Figura.cpp Figura.h Trojkat.cpp Trojkat.h Kwadrat.cpp Kwadrat.h Kolo.cpp Kolo.h)
add_definitions(-std=c++11)
include_directories(${PROJECT_BINARY_DIR})