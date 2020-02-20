cmake_minimum_required(VERSION 3.8)
project(c_programming)

set(CMAKE_C_STANDARD 99)
# Include all library code
FILE(GLOB MyCSources mylib/*.c)

# folder name: sorting
add_executable(test_bubble_sort sorting/test_bubble_sort.c ${MyCSources})

# folder name: temp
add_executable(loop temp/loop.c ${MyCSources})