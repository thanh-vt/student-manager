cmake_minimum_required(VERSION 3.12)
project(student-manager)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SRC "include/*.h" "src/*.cpp")
include_directories(include)
add_executable(student-manager ${SRC})
