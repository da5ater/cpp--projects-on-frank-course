#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private :
    char *str;

public :
    Mystring();                             //no-args constructor
    Mystring(const char* s);               // overloaded constructor
    Mystring(const Mystring &source);     // copy constructor
    Mystring (Mystring && source);       //move constructor
    ~Mystring();                        // destructor
    void display ();
    int get_length();
    const char* get_str();
    Mystring &operator=(const Mystring &rhs);           //  assignment operator overloading using copy constructor
    Mystring &operator=(Mystring &&rhs);               //  assignment operator overloading  using move constructor
    Mystring operator-() const;                       //  make lower case
    Mystring operator+(const Mystring& rhs) const;   //  concatenation
    bool operator==(const  Mystring& rhs) const;
};

#endif // _MYSTRING_H_
