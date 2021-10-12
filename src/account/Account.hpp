#pragma once
#include <string>
#include "Holder.hpp"
#include <utility>

class Account
{
    enum class ResultTransaction {
        Sucess, Failed
    };

    static unsigned int quantityAccounts;
    std::string number;
    Holder holder;
    float balance;

protected:
    std::pair < ResultTransaction, float> deposit(float value);
    std::pair<ResultTransaction, float> withdraw(float value);

public:
    Account() = delete;
    Account(std::string number, Holder holder);
    virtual ~Account();
    
    static unsigned int get_quantity_accounts();
    float get_balance() const;
    virtual float get_tariff() const = 0;
    std::string get_number() const;
    void operator+=(float value);
    void operator-=(float value);
    friend std::ostream &operator<<(std::ostream &cout, const Account &account);
    Holder get_holder() const;
};