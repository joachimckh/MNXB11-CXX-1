#pragma once
#include <vector>

namespace homework {

//  2.1
struct Foo {
  int bar();
  float baz();
  std::vector<double> quux();
  float x;
};

//  2.2
class fVector2D {
public:
  fVector2D() = default;
  fVector2D(float x, float y) : x_(x), y_(y) {}

 bool operator==(const fVector2D &a) const;
friend fVector2D operator+(const fVector2D &a , const fVector2D &b);


private:
  float x_;
  float y_;
};

}
