cmake_minimum_required(VERSION 3.23)
project(simple_svm)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)
include_directories(include)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(simple_svm main.cpp)


target_link_libraries(simple_svm ${OpenCV_LIBS})

add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/src")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/tests")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/lib/googletest")