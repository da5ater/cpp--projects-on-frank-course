#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
//    Mystring empty;                      // no-args constructor
//    Mystring larry("Larry");             // overloaded constructor
//    Mystring stooge {larry};            // copy constructor 
//    
//    empty.display();
//    larry.display();
//    stooge.display();

    Mystring a {"hello"};
    Mystring b;
    
    b = a;
    
    b = "this is a test";
    
    return 0;
}