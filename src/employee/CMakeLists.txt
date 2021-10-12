cmake_minimum_required(VERSION 3.15)
project(employee CXX)

add_library(employee)

target_sources(
    employee
    PUBLIC
        Employee.hpp
        Manager.hpp
        Cashier.hpp
        WeekDay.hpp
    PRIVATE
        Employee.cpp
        Manager.cpp
        Cashier.cpp
)

target_include_directories(
    employee
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}   
)