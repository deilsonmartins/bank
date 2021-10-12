#pragma once
#include <string>
#include "Holder.hpp"

class Account
{
    static unsigned int quantityAccounts;
    Holder holder;
    std::string number;
    float balance;
    
public:
    Account() = delete;
    Account(std::string number, Holder holder);
    virtual ~Account();

    void deposit(float value);
    void withdraw(float value);
    static unsigned int get_quantity_accounts();
    float get_balance() const;
    virtual float get_tariff() const = 0;
    std::string get_number() const;
    Holder get_holder() const;
};