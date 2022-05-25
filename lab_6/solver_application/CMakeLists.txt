cmake_minimum_required(VERSION 3.4)

project(solver_app)

set(CMAKE_CXX_STANDART 17)
set(CMAKE_CXX_STANDART_REQUIRED ON)

include_directories("../formatter_lib")
include_directories("../formatter_ex_lib")
include_directories("../solver_lib")
add_library(formatter_lib STATIC "../formatter_lib/formatter.cpp")
add_library(formatter_ex_lib STATIC "../formatter_ex_lib/formatter_ex.cpp")
add_library(solver_lib STATIC "../solver_lib/solver.cpp")

add_executable(solver_app equation.cpp)
target_link_libraries(solver_app solver_lib formatter_ex_lib formatter_lib)
