#include <iostream>
#include "Account.h"
#include "saving_account.h"
int main()
{
    Account a {};
    saving_account b{};
    
    b.deposit(100);
    b.withdraw(100);
}