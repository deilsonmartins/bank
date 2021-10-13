cmake_minimum_required(VERSION 3.15)
project(person CXX)

add_library(person)

target_sources(
    person
    PUBLIC
        Person.hpp
        Cpf.hpp
    PRIVATE
        Cpf.cpp
)

target_include_directories(
    person
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}   
)