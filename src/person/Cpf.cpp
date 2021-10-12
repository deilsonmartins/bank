#include "Cpf.hpp"
#include "iostream"
Cpf::Cpf(std::string number) : number(number)
{
}

std::string Cpf::get_number() const
{
    return number;
}
