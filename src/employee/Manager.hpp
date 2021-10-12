#pragma once
#include "Employee.hpp"

class Manager final : public Employee
{

public:
    Manager(std::string const &name, Cpf const &cpf, float salary);
    float get_bonus() const override;
};