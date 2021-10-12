#include "Cashier.hpp"
#include <iostream>

Cashier::Cashier(std::string const &name, Cpf const &cpf, float salary, std::string password) : Employee(name, cpf, salary), Auth(password){};

float Cashier::get_bonus() const
{
    return get_salary() * 0.05;
};

bool Cashier::authentication(std::string password_) const
{
    if (password == password_)
    {
        std::cout << std::endl;
        std::cout << "Caixa, login efetuado com sucesso." << std::endl;
        std::cout << std::endl;
        return true;
    }
    else
    {
        std::cout << std::endl;
        std::cout << "Caixa, senha incorreta." << std::endl;
        std::cout << std::endl;
        return false;
    }
};