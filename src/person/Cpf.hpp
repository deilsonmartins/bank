#pragma once
#include <string>

class Cpf
{
    std::string number;

public:
    Cpf(std::string number);
    std::string get_number() const;
};