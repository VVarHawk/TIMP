cmake_minimum_required(VERSION 3.4)


set(CMAKE_CXX_STANDART 17)

set(PROJECT_NAME test)
set(PROJECT_SRC)
set(PROJECT_TEST ${CMAKE_CURRENT_SOURCE_DIR}/test/bubble_sort_test.cpp)

set(GTEST_LIB gtest_main gmock_main)


project(${PROJECT_NAME})

add_library(bubble_sort STATIC ${CMAKE_CURRENT_SOURCE_DIR}/src/bubble_sort.cpp)


add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/third-party/gtest)
add_executable(${PROJECT_NAME} ${PROJECT_SRC} ${PROJECT_TEST})
target_link_libraries(${PROJECT_NAME} PRIVATE ${GTEST_LIB} bubble_sort)

include(CPackConfig.cmake)
