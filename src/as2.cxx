#include "as2.hpp"
#include <vector> //So we can include vectors

namespace homework {

// implement Foo methods here
int Foo::bar() { 
  return 42; //This does so it returns 42
}

float Foo::baz() { 
  x = 2.71;   //This sets the member variable to the number we want
  return 3.14; //This does so it returns 3.14
}

std::vector<double> Foo::quux() {
  return {1.0, 2.0, 3.0};
}

} // namespace homework
