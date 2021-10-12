#include "Account.hpp"
#include <iostream>

unsigned int Account::quantityAccounts = 0;

unsigned int Account::get_quantity_accounts()
{
    return quantityAccounts;
}

Account::Account(std::string number, Holder holder) : number(number), holder(holder), balance(0)
{
    quantityAccounts++;
}

Account::~Account()
{
    quantityAccounts--;
}

void Account::deposit(float value)
{
    if (value < 0)
    {
        std::cout << "Impossível depositar valor negativo." << std::endl;
        return;
    }
    balance += value;
}

void Account::withdraw(float value)
{
    if (value < 0)
    {
        std::cout << "Impossível sacar valor negativo." << std::endl;
        return;
    }

    float value_withdraw = value + get_tariff();
    if (value_withdraw > balance)
    {
        std::cout << "Valor do saque maior que o saldo disponível." << std::endl;
        return;
    }

    balance -= value_withdraw;
}

float Account::get_balance() const
{
    return balance;
}

std::string Account::get_number() const
{
    return number;
}

Holder Account::get_holder() const
{
    return holder;
}
