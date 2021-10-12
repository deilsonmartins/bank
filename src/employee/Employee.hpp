#pragma once

#include <string>
#include "../person/Cpf.hpp"
#include "../person/Person.hpp"

class Employee : public Person {
    float salary;
    public:
        Employee(std::string const& name, Cpf const& cpf, float salary);
        std::string get_name_and_cpf() const;
        virtual float get_bonus() const = 0;
        float get_salary() const;

};