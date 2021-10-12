#include <iostream>
#include "CurrentAccount.hpp"
#include "SavingsAccount.hpp"
#include "Holder.hpp"
#include "Manager.hpp"
#include "Cashier.hpp"
#include <cstdlib>
#include <ctime>

void print_account_information(const Account &account)
{
    std::cout << std::endl;
    std::cout << "Informações da conta: " << std::endl;
    std::cout << "Número: " << account.get_number() << std::endl;
    std::cout << "Name: " << account.get_holder().get_name() << std::endl;
    std::cout << "CPF: " << account.get_holder().get_cpf() << std::endl;
    std::cout << "Saldo disponível: " << account.get_balance() << std::endl;
    std::cout << std::endl;
}
int main()
{
    srand(time(0));
    CurrentAccount p1(std::to_string(rand()), Holder("Deilson Martins", std::string(std::to_string(rand()))));

    p1.deposit(500.0);
    p1.withdraw(250.0);

    CurrentAccount p2(std::to_string(rand()), Holder("Vitória Cajuí", std::string(std::to_string(rand()))));

    p2.deposit(700.0);
    p2.withdraw(150.0);

    SavingsAccount p3(std::to_string(rand()), Holder("Eliane Martins", std::string(std::to_string(rand()))));

    p3.deposit(1500.0);
    p3.withdraw(500.0);

    print_account_information(p1);
    print_account_information(p2);
    print_account_information(p3);
    std::cout << "Número de contas: " << Account::get_quantity_accounts() << std::endl;

    Manager e1("Deilson Martins", std::string(std::to_string(rand())), 1000.0, "sdfsdf");
    std::cout << "Funcionário: " << e1.get_name_and_cpf() << std::endl;

    Cashier e2("Vitória Cajuí", std::string(std::to_string(rand())), 1000.0, "hjkhk");
    std::cout << "Funcionário: " << e2.get_name_and_cpf() << std::endl;

    e1.authentication("sdfsdf");
    e2.authentication("hjkhk");

    p1.transfer(p2, 100.0);
    p1.transfer(p3, 50.0);

    print_account_information(p1);
    print_account_information(p2);
    print_account_information(p3);
    
    return 0;
}
