#pragma once

#include "Account.hpp"

class SavingsAccount final : public Account
{
    char account_type = 'S';
    float tariff = 0.03;

public:
    SavingsAccount(std::string number, Holder holder) : Account(number, holder){};
    char get_account_type() const;
    float get_tariff() const override;
};