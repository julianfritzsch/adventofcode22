cmake_minimum_required(VERSION 3.16)
project(AdventOfCode LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
set(CMAKE_EXPORT_COMPILE_COMMANDS True)

# export config header
configure_file(${PROJECT_SOURCE_DIR}/src/ProjectConfig.hpp.in ${PROJECT_SOURCE_DIR}/src/ProjectConfig.hpp)
include_directories()

add_executable(day1 src/day1.cpp)
add_executable(day2 src/day2.cpp)
