#pragma once
#include <vector>
#include <ostream>

//Strukt Foo with methods bar, bac and quux
namespace homework {
struct Foo {
  int bar();
  float baz();
  std::vector<double> quux();
  float x;
};


// Custom vector class fVector2D, that will overload operators
class fVector2D {
  public:
    fVector2D() = default;
    fVector2D(float x, float y) : x_(x), y_(y) {}
    
    //Overloading operator +
    friend fVector2D operator+(const fVector2D &a, const fVector2D &b);
    //Overloading operator ==
    bool operator==(const fVector2D &b) const;

  private:
    float x_;
    float y_;
};

} // namespace homework
