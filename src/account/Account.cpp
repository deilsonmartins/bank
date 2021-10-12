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

std::pair<Account::ResultTransaction, float> Account::deposit(float value)
{
    if (value < 0)
    {
        std::cout << "Impossível depositar valor negativo." << std::endl;
        return std::make_pair(ResultTransaction::Failed, balance);
    }
    balance += value;
    return std::make_pair(ResultTransaction::Sucess, balance);
}

std::pair<Account::ResultTransaction, float> Account::withdraw(float value)
{
    if (value < 0)
    {
        std::cout << "Impossível sacar valor negativo." << std::endl;
        return std::make_pair(ResultTransaction::Failed, balance);
    }

    float value_withdraw = value + get_tariff();
    if (value_withdraw > balance)
    {
        std::cout << "Valor do saque maior que o saldo disponível." << std::endl;
        return std::make_pair(ResultTransaction::Failed, balance);
    }

    balance -= value_withdraw;
    return std::make_pair(ResultTransaction::Sucess, balance);
}

Holder Account::get_holder() const
{
    return holder;
}

float Account::get_balance() const
{
    return balance;
}

std::string Account::get_number() const
{
    return number;
}

void Account::operator+=(float value)
{
    auto status = deposit(value).first;
    if (status == ResultTransaction::Sucess)
    {
        std::cout << "Depósito realizado com sucesso." << std::endl;
    }
    if (status == ResultTransaction::Failed)
    {
        std::cout << "Falha ao tentar realizar o depósito. Contate o gerente para mais informações." << std::endl;
    }
}

void Account::operator-=(float value)
{
    auto status = withdraw(value).first;
    if (status == ResultTransaction::Sucess)
    {
        std::cout << "Saque realizado com sucesso." << std::endl;
    }
    if (status == ResultTransaction::Failed)
    {
        std::cout << "Falha ao tentar realizar o saque. Contate o gerente para mais informações." << std::endl;
    }
}
