#include <cstring>
#include <iostream>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring()
    :str{nullptr} {
    str = new char[1];
    *str = '\0';                                    
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) { // if s is empty
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s)+1]; // iadded one because i need an extra character for theramnatin /0
            std::strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source)  // Deep copy
     : str{nullptr} {
        str = new char[std::strlen(source.str)+ 1];
        std::strcpy(str, source.str);
}

Mystring::Mystring (Mystring && source)  // move constructor 
    :str{source.str}    {
        source.str =nullptr;
    };
    
// Destructor
Mystring::~Mystring() {
    delete [] str;
}

// Display method
void Mystring::display()  {
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
 int Mystring::get_length()  { return std::strlen(str); }
 
  // string getter
 const char *Mystring::get_str()  { return str; }
 
 // copy assignemt operator-overloading
 Mystring &Mystring::operator=(const Mystring &rhs){
     std::cout << "copy assignment" <<std::endl;
     if (this == &rhs){
         return *this; //return current object
     }
     
     delete [] str;
     this->str = new char[strlen(rhs.str) + 1];
     strcpy(str , rhs.str);
     
     return *this;
 }


 // move assignemt operator-overloading
Mystring & Mystring::operator=(Mystring &&rhs){   
    std::cout << "move assignemt" << std::endl;
    
    if (this == &rhs){
         return *this; //return current object
     }
     
     delete [] this->str;
     str = rhs.str;
     rhs.str = nullptr;
     return *this;
}



