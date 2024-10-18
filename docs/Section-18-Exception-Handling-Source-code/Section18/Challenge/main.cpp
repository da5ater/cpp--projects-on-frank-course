#include "Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include <iostream>
#include <memory>

using namespace std;

int main() {

  try {
    std::unique_ptr<Account> acc = std::make_unique<Checking_Account>("no", 1);
    acc->withdraw(100000);
    acc->withdraw(100000);
    acc->withdraw(100000);
  } catch (const InsufficentFundsException &ex) {
    std::cerr << ex.what() << endl;
  }
  std::cout << "Program completed successfully" << std::endl;
  return 0;
}
