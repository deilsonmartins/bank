#include "Person.hpp"

Person::Person(std::string name, Cpf cpf) : name(name), cpf(cpf)
{
}

std::string Person::get_name() const
{
    return name;
}

std::string Person::get_cpf() const
{
    return cpf.get_number();
}