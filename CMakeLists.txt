cmake_minimum_required(VERSION 3.20)

project(sewald LANGUAGES C CXX)

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH}" "${CMAKE_SOURCE_DIR}/cmake")

find_package(FFTW REQUIRED)
find_package(Eigen3 REQUIRED)

include_directories(${FFTW_INCLUDE_DIRS})
include_directories(${EIGEN3_INCLUDE_DIR})

add_subdirectory(src)
