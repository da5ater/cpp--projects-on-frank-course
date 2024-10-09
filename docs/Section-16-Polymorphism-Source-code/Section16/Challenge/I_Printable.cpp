#include "I_Printable.hpp"

std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
  obj.print(os); // Call the virtual print method
  return os;
}