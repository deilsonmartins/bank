#pragma once
#include "Cpf.hpp"

class Person
{
protected:
    Cpf cpf;
    std::string name;

public:
    Person(std::string name, Cpf cpf);

    std::string get_name() const;
    std::string get_cpf() const;
};