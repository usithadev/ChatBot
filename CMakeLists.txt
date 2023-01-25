cmake_minimum_required(VERSION 3.10)

project(ChatBot VERSION 1.0.0)

set(SOURCES main.cpp main.h funcs.h funcs.cpp)

if(WIN32)
    set(SOURCES ${SOURCES} res.rc)
endif()

add_executable(ChatBot ${SOURCES})