#pragma once
#include "Account.h"

class saving_account : public Account
{
public:
    int id;
    saving_account ();
    ~saving_account();

void deposit(double amount);
};

