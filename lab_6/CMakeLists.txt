cmake_minimum_required(VERSION 3.4)

project(lab_6)

set(CMAKE_CXX_STANDART 17)
set(CMAKE_CXX_STANDART_REQUIRED ON)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/solver_application)

include(CPackConfig.cmake)
