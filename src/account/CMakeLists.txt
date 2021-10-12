cmake_minimum_required(VERSION 3.15)
project(account CXX)

add_library(account)

target_sources(
    account
    PUBLIC
        Account.hpp
        Holder.hpp
        CurrentAccount.hpp
        SavingsAccount.hpp
    PRIVATE
        Account.cpp
        Holder.cpp
        CurrentAccount.cpp
        SavingsAccount.cpp

)

target_include_directories(
    account
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}   
)