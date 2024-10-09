#ifndef I_PRINTABLE_HPP
#define I_PRINTABLE_HPP
#include <iostream>

class I_Printable {

public:
  virtual void print(std::ostream &os) const = 0;
  virtual ~I_Printable() = default;
};

std::ostream &operator<<(std::ostream &, const I_Printable &obj);
#endif