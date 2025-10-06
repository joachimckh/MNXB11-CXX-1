#pragma once
#include <vector>

namespace homework {
// Hint: Lecture 5 slides

// As 2.1 struct with a method that returns an int
// TO DO: in src/as1.cxx, implement the method bar() of the struct Foo to return 42.
// TO DO: in src/as1.cxx, implement the method baz() of the struct Foo to return 3.14 and set the member variable x to 2.71
// TO DO: in src/as1.cxx, implement the method quux() of the struct Foo to return a vector of doubles {1.0, 2.0, 3.0}
struct Foo {
  int bar();
  float baz();
  std::vector<double> quux();

  float x;
};

// As 2.2 (Operator overloading) custom vector class, that will overload operators
// TO DO: implement the overloaded + operator and == operator
// + operator should return a fVector2D that is the element-wise sum of two vectors
// == operator should return true if two vectors are equal (element-wise)
// HINT: you can use friend functions for operator overloading (+)
// and member functions for operator overloading (==)
class fVector2D {
public:
  fVector2D() = default;
  fVector2D(float x, float y) : x_(x), y_(y) {} //This last part sets private variable equal to the argument

  bool operator==(const fVector2D& other) const { //overload operator for ==, will take another vector to compare
        return x_ == other.x_ && y_ == other.y_; //checks if the x and y values are the same, will return true if both are equal
    }

  friend fVector2D operator+(const fVector2D& lhs, const fVector2D& rhs) { 
        return fVector2D(lhs.x_ + rhs.x_, lhs.y_ + rhs.y_); // the new x is sum of both x's
    }

private:
  float x_;
  float y_;
};

} // namespace homework
