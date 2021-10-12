cmake_minimum_required(VERSION 3.15)
project(auth CXX)

add_library(auth)

target_sources(
    auth
    PUBLIC
        Auth.hpp
    PRIVATE
        Auth.cpp
)

target_include_directories(
    auth
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}   
)