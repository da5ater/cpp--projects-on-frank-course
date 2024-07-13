#include "Account.h"
#include <iostream>

Account::Account () : name{"account"}
{
    std ::cout << "constructor for -> " << this << std::endl;
}

Account::~Account()
{
       std ::cout << "destructor for -> " << this << std::endl;
}

void Account::deposit(double amount) {
    std::cout << "deposit : " << amount << std::endl;
}

void Account::withdraw(double amount){
    std::cout << "withdraw : " << amount << std::endl;        
}




