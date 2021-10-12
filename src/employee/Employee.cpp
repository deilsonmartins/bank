#include "Employee.hpp"

Employee::Employee(std::string const &name, Cpf const &cpf, float salary) : Person(name, cpf), salary(salary){

                                                                                               };

std::string Employee::get_name_and_cpf() const
{
    return name + " | " + cpf.get_number();
};

float Employee::get_salary() const
{
    return salary;
};