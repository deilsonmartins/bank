#pragma once
#include "Employee.hpp"

class Cashier final : public Employee
{

public:
    Cashier(std::string const &name, Cpf const &cpf, float salary);
    float get_bonus() const override;
};