# set minimum cmake version
cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

# project name
project(mw_data LANGUAGES CXX)

add_library(mw_data "")
find_package(Eigen3 3.3 CONFIG NO_CMAKE_PACKAGE_REGISTRY)
target_link_libraries(mw_data PUBLIC Eigen3::Eigen)

add_subdirectory(derivative_operator_source)
add_subdirectory(mwfilters_source)
