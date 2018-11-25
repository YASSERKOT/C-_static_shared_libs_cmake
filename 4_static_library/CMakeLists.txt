cmake_minimum_required(VERSION 3.0)
project(project_3)
set(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

#Include the headers, such as User.h into the project
include_directories(include)

#Add source files
set(SOURCES src/main.cpp src/User.cpp)

file(GLOB SOURCES "src/*.cpp")

add_library(testUser SHARED ${SOURCES})

install(TARGETS testUser DESTINATION /usr/lib)
