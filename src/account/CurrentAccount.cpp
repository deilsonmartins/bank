#include "CurrentAccount.hpp"
#include "iostream"

char CurrentAccount::get_account_type() const
{
    return account_type;
};

float CurrentAccount::get_tariff() const
{
    return tariff;
}

void CurrentAccount::transfer(Account &Destiny, float value)
{
    withdraw(value);
    Destiny.deposit(value);
    std::cout << std::endl;
    std::cout << "Transferência realizada com sucesso." << std::endl;
    std::cout << "Remetente: " << get_holder().get_name() << std::endl;
    std::cout << "Destinatário: " << Destiny.get_holder().get_name() << std::endl;
    std::cout << "Valor: " << value << std::endl;
    std::cout << std::endl;
}