cmake_minimum_required(VERSION 3.8)
project(c_programming)

set(CMAKE_C_STANDARD 99)
# Include all library code
FILE(GLOB MyCSources mylib/*.c)

# folder name: sorting
add_executable(test_insertion_sort sorting/test_insertion_sort.c ${MyCSources})

# folder name: temp
add_executable(loop temp_code/loop.c ${MyCSources})