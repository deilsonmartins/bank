#include "Manager.hpp"

Manager::Manager(std::string const &name, Cpf const &cpf, float salary) : Employee(name, cpf, salary){

};

float Manager::get_bonus() const
{
    return get_salary() * 0.1;
};