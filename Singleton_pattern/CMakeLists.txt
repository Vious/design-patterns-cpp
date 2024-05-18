cmake_minimum_required(VERSION 3.16)

project(ObeserverPattern)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE "Debug")
# set(CMAKE_CPP_COMPILER iccarm)
set(CMAKE_CXX_COMPILER /usr/bin/clang++)


set(SOURCE_FILES main.cpp)

add_executable(uni_ins ${SOURCE_FILES})
target_link_libraries(uni_ins pthread)