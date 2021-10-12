#pragma once

#include "Account.hpp"

class CurrentAccount final : public Account
{
    char account_type = 'C';
    float tariff = 0.05;

public:
    CurrentAccount(std::string number, Holder holder) : Account(number, holder){};
    char get_account_type() const;
    float get_tariff() const override;
    void transfer(Account &Destiny, float value);
    void operator>>(Account &Destiny);
};