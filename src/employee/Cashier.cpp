#include "Cashier.hpp"

Cashier::Cashier(std::string const &name, Cpf const &cpf, float salary) : Employee(name, cpf, salary){};

float Cashier::get_bonus() const{
    return get_salary() * 0.05;
};