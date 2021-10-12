#pragma once
#include "Employee.hpp"
#include "../auth/Auth.hpp"

class Cashier final : public Employee, Auth
{

public:
    Cashier(std::string const &name, Cpf const &cpf, float salary, WeekDay payment_day, std::string password);
    float get_bonus() const override;
    bool authentication(std::string password) const override;
};