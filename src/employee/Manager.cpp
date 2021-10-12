#include "Manager.hpp"
#include <iostream>

Manager::Manager(std::string const &name, Cpf const &cpf, float salary, WeekDay payment_day, std::string password) : Employee(name, cpf, payment_day, salary),
                                                                                                                     Auth(password){

                                                                                                                     };

float Manager::get_bonus() const
{
    return get_salary() * 0.1;
};

bool Manager::authentication(std::string password_) const
{
    if (password == password_){
        std::cout << std::endl;
        std::cout << "Gerente, login efetuado com sucesso." << std::endl;
        std::cout << std::endl;
        return true;
    }
    else{
        std::cout << std::endl;
        std::cout << "Gerente, senha incorreta." << std::endl;
        std::cout << std::endl;
        return false;
    }
};