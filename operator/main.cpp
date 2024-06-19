#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring a {"Hello"};
    a = Mystring {"hola"};
    a = "Bonjour";
    
    Mystring b {"hola"};
    
    a = b;
    
    cout << boolalpha <<endl;
    
    Mystring mohamed {"MOHAMED"};
    
    
    mohamed.display();
    
    mohamed = -mohamed;
    
    mohamed.display();
    
    
    mohamed = mohamed + "khater";
    mohamed.display();
    
    Mystring hassan  {"hassan" };
    hassan.display();
    
    cout << (mohamed == hassan) << endl;
    
    
}