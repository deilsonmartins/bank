#pragma once
#include "Employee.hpp"
#include "../auth/Auth.hpp"

class Manager final : public Employee, Auth
{

public:
    Manager(std::string const &name, Cpf const &cpf, float salary, WeekDay payment_day, std::string password);
    float get_bonus() const override;
    bool authentication(std::string password) const override;
};