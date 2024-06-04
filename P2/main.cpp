#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /* 1- ask the user to enter number of cents they have.
     * 2- calculate how many dollars they have
     *    ( reminder = GivenNumberOfCents % 100
            Dollars  = (GivenNumberOfCents - reminder) / 100
            prompt the user your calculation
          )
       3- calculate how many quarter they have.
     * 
     */
    const int DollarPC {100}, QuarterPC{25}, DimePC{10}, NicklePC{5}, PennyPC{1};
    int reminder{0};
 
    cout << "Enter How much Cents do you have." << endl;
    int Cents {0};
    cin >> Cents;
    
    reminder = Cents % DollarPC;
    int Dollars = (Cents - reminder) / DollarPC;

    Cents = reminder;
    reminder = Cents % QuarterPC;
    int Quaters = (Cents - reminder) / QuarterPC;
    
    Cents = reminder;
    reminder = Cents % DimePC;
    int Dimes = (Cents - reminder) / DimePC;

    Cents = reminder;
    reminder = Cents % NicklePC;
    int Nickles = (Cents - reminder) / NicklePC;

    Cents = reminder;
    reminder = Cents % PennyPC;
    int Pennies = (Cents - reminder) / PennyPC;
    
    
    
    cout << "Dollars  : " <<  Dollars << endl;
    cout << "Quarters : " <<  Quaters << endl;
    cout << "Dimes    : " <<  Dimes   << endl;
    cout << "Nickles  : " <<  Nickles << endl;
    cout << "Pennies  : " <<  Pennies << endl;
    
    
    return 0 ;   
}

/* 1 dollar = 100 cents
 * 1 quarter= 25  cents
 * 1 dime   = 10  cents
 * 1 nickle = 5   cents
 * 1 penny  = 1   cents
*/    