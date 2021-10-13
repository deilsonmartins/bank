#include "Employee.hpp"

Employee::Employee(std::string const &name, Cpf const &cpf, WeekDay payment_day, float salary) : Person(name, cpf), payment_day(payment_day), salary(salary){

                                                                                                                    };

std::string Employee::get_name_and_cpf() const
{
    return name + " | " + document.get_number();
};

float Employee::get_salary() const
{
    return salary;
};