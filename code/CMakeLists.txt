cmake_minimum_required(VERSION 3.17)
project(code)

set(CMAKE_CXX_STANDARD 14)

add_executable(code judge_prime_number.cpp Euclidean_algorithm.cpp)
add_executable(code1 Extended_Euclidean_algorithm.cpp)
add_executable(code2 Euclidean_algorithm.cpp)
add_executable(code3 high_power_modular_operations.cpp)