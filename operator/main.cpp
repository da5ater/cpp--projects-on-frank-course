#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring a {"Hello"};
    a = Mystring {"hola"};
    a = "Bonjour";
    
    Mystring b {"hola"};
    
    a = b;
    return 0;
}