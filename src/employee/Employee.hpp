#pragma once

#include <string>
#include "../person/Cpf.hpp"
#include "../person/Person.hpp"
#include "WeekDay.hpp"

class Employee : public Person<Cpf>
{
    WeekDay payment_day;
    float salary;

public:
    Employee(std::string const &name, Cpf const &cpf, WeekDay payment_day, float salary);
    std::string get_name_and_cpf() const;
    virtual float get_bonus() const = 0;
    float get_salary() const;
};