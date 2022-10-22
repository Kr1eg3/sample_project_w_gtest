cmake_minimum_required(VERSION 3.23)
project(simple_svm)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(simple_svm main.cpp)

add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/src")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/tests")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/lib/googletest")
