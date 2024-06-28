#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring mohamed {"mohamed"};
    Mystring osama   {"osama"}  ;
    Mystring khater             ;
    
    cout << "enter the family name \n";
    cin >> khater;
    
    cout << "your name is \n";
    cout << mohamed  << osama << khater;
    
    
    
    
    
}