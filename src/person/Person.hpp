#pragma once
#include "Cpf.hpp"

template <typename T>
class Person
{
protected:
    T document;
    std::string name;

public:
    Person(std::string name, T document) : name(name), document(document){};

    std::string get_name() const{
        return name;
    }
    T get_document(){
        return document;
    } 
};