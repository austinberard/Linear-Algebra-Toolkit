cmake_minimum_required(VERSION 3.6)
project(Linear_Algebra_Toolkit)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        src/main.cpp src/Vector.cpp include/Vector.h src/LAT.cpp include/LAT.h src/Matrix.cpp include/Matrix.h)

add_executable(Linear_Algebra_Toolkit ${SOURCE_FILES})