cmake_minimum_required(VERSION 3.29)
project(OpenCv)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 20)

add_executable(OpenCv main.cpp
        main2.cpp
        main3.cpp)
target_link_libraries(OpenCv ${OpenCV_LIBS})
