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
        std::cout << "overloaded constructor\n";
        if (s==nullptr) { // if s is empty
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s)+1]; // iadded one because i need an extra character for theramnatin \0
            std::strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source)  // Deep copy
     : str{nullptr} {
        std::cout << "deep copy\n";
        str = new char[std::strlen(source.str)+ 1];
        std::strcpy(str, source.str);
}

Mystring::Mystring (Mystring && source)  // move constructor 
    :str{source.str}    {
        std::cout << "move constructor\n";
        source.str =nullptr;
    };
    
// Destructor
Mystring::~Mystring() {
    std::cout << "destructor\n";
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
     std::cout << "copy assignment\n" <<std::endl;
     if (this == &rhs){
         return *this; //return current object
     }
     
     delete [] str;
     this->str = new char[strlen(rhs.str) + 1];
     strcpy(str , rhs.str);
     
     return *this;
 }


//move assignemt operator-overloading
Mystring & Mystring::operator=(Mystring &&rhs){   
    std::cout << "move assignemt\n" << std::endl;
    
    if (this == &rhs){ //if the address og the current object is equal to the address of the rhs object
         return *this; //return current object
     }
     
     delete [] this->str;
     str = rhs.str;
     rhs.str = nullptr;
     return *this;
}

Mystring operator-(const Mystring& obj){
    char* buff = new char[strlen(obj.str) + 1];
    
    strcpy(buff , obj.str);
    
    for(size_t i = 0 ; i < strlen(buff) ; i++){
        buff[i] = tolower(buff[i]);
    }
    
    Mystring temp {buff};
    delete [] buff;
    
    return temp;
}

Mystring operator+(const Mystring& rhs , const Mystring& lhs)  {
    char* buff = new char[strlen(lhs.str) + strlen(rhs.str) + 1];
    
    strcpy(buff , lhs.str);
    strcat(buff , rhs.str);
    
    Mystring temp{buff};
    delete [] buff;
    
    return temp;
    
}

bool operator==(const  Mystring& rhs , const  Mystring& lhs)  {
    return strcmp(lhs.str , rhs.str) == 0 ;
}



std::ostream& operator<<(std::ostream& os, const Mystring& obj) {
    os << obj.str;
    return os;
}
std::istream& operator>>(std::istream& is,  Mystring& obj) {
    char* buff = new char[100];
    is >> buff;
    
    obj = Mystring {buff};  // copy and move semantics
    delete [] buff;
    return is;
}