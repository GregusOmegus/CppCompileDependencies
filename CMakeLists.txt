cmake_minimum_required(VERSION 3.12)
project(CppCompileDependencies)

set(CMAKE_CXX_STANDARD 17)

set(Boost_USE_STATIC_LIBS ON)
find_package(Boost REQUIRED)

add_subdirectory(bad)
add_subdirectory(good)
