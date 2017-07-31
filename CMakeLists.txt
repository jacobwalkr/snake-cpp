cmake_minimum_required(VERSION 3.8)
project(snake_cpp)

set(CMAKE_CXX_STANDARD 11)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

set(SOURCE_FILES main.cpp Snake.cpp Snake.h)
add_executable(snake_cpp ${SOURCE_FILES})
target_link_libraries(snake_cpp ${CURSES_LIBRARIES})
