#include "as2.hpp"
#include <vector> 
namespace homework {

// implement Foo methods here
int Foo::bar() { 
  return 42; 
}

float Foo::baz() {
  float x = 2.71;
  return 3.14;

}
//stack overflow had a similar thing, proud to say i actually understood
std::vector<double> Foo::quux() {
  std::vector<double> rtnVec = {1.0, 2.0, 3.0};
  return rtnVec;
}

} // namespace homework
