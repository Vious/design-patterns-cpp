cmake_minimum_required(VERSION 3.16)

project(ObeserverPattern)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE "Debug")
# set(CMAKE_CPP_COMPILER iccarm)
set(CMAKE_CXX_COMPILER /usr/bin/clang++)


set(SOURCE_FILES starbuzz.cpp)

add_executable(starbuzz ${SOURCE_FILES})