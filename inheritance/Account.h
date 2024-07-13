#include <string>

#pragma once

class Account
{
public:
    std::string name;
    
    void deposit(double amount);
    void withdraw(double amount);
    Account();
    ~Account();

};

