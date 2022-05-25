cmake_minimum_required(VERSION 3.4)
project(lab03)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/solver_application)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/hello_world_application)

