#include "as2.hpp"

namespace homework {

// as 2.1
// implement Foo methods here
int Foo::bar() { 
  return 42; 
}

float Foo::baz() {
  x = 2.71; //member variable
  return 3.14;
}

std::vector<double> Foo::quux() {
  return {1.0, 2.0, 3.0};
}

} // namespace homework
