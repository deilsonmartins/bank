cmake_minimum_required(VERSION 3.15)
project(bank CXX)

add_subdirectory(account)
add_subdirectory(employee)
add_subdirectory(person)
add_subdirectory(auth)

add_executable(bank)

target_sources(
    bank
    PRIVATE
        main.cpp
)

target_link_libraries(
    bank
    PRIVATE
        account
        employee
        person
        auth
)

target_compile_features(
    bank
    PRIVATE
        cxx_std_17   
)

#target_compile_options(
#    bank
#    PRIVATE
#        -Wall
#        -Wextra
#        -Wpedantic

#)