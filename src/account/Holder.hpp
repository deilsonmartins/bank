#pragma once
#include <string>
#include "../person/Cpf.hpp"
#include "../person/Person.hpp"

class Holder : public Person
{

public:
    Holder(std::string name, Cpf cpf);

};