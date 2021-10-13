#include <iostream>
#include "CurrentAccount.hpp"
#include "SavingsAccount.hpp"
#include "Holder.hpp"
#include "Manager.hpp"
#include "Cashier.hpp"
#include <cstdlib>
#include <ctime>

std::ostream& operator<<(std::ostream& cout, const Account& account){
    Cpf cpf = account.get_holder().get_document();
    std::cout << std::endl;
    std::cout << "Informações da conta: " << std::endl;
    std::cout << "Número: " << account.get_number() << std::endl;
    std::cout << "Name: " << account.holder.get_name() << std::endl;
    std::cout << "Cpf: " << cpf.get_number() << std::endl;
    std::cout << "Saldo disponível: " << account.get_balance() << std::endl;
    std::cout << std::endl;

    return std::cout;
}

int main()
{
    srand(time(0));
    CurrentAccount p1(std::to_string(rand()), Holder("Pessoa 1", std::string(std::to_string(rand()))));
    p1 += 500;
    p1 -= 600;
    
    CurrentAccount p2(std::to_string(rand()), Holder("Pessoa 2", std::string(std::to_string(rand()))));
    p2 += 700;
    p2 -= 150;

    SavingsAccount p3(std::to_string(rand()), Holder("Pessoa 3", std::string(std::to_string(rand()))));
    p3 += 1500;
    p3 -= 500;

    std::cout << p1;
    std::cout << p2;
    std::cout << p3;

    std::cout << "Número de contas: " << Account::get_quantity_accounts() << std::endl;

    Manager e1("Pessoa 1", std::string(std::to_string(rand())), 1000.0, WeekDay::Terca, "sdfsdf");
    std::cout << "Funcionário: " << e1.get_name_and_cpf() << std::endl;

    Cashier e2("Pessoa 2", std::string(std::to_string(rand())), 1000.0, WeekDay::Terca, "hjkhk");
    std::cout << "Funcionário: " << e2.get_name_and_cpf() << std::endl;

    e1.authentication("sdfsdf");
    e2.authentication("hjkhk");
 
    p1.transfer(p2, 100.0);
    p1.transfer(p3, 50.0);
    p1>>p2;

    std::cout << p1;
    std::cout << p2;
    std::cout << p3;

    return 0;
}
