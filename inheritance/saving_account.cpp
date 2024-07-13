#include "saving_account.h"
#include <iostream>
saving_account::saving_account() :id{1}
{
}

saving_account::~saving_account()
{
}

void saving_account::deposit(double amount) {
        std::cout << "saving deposit : " << amount << std::endl;
}
