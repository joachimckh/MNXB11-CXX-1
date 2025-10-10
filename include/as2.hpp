#pragma once
#include <vector>

namespace homework
{

  struct Foo
  {
    int bar();
    float baz();
    std::vector<double> quux();

    float x;
  };

  class fVector2D
  {
  public:
    fVector2D() = default;
    fVector2D(float x, float y) : x_(x), y_(y) {}

    bool operator==(const fVector2D &other) const
    {
      return x_ == other.x_ && y_ == other.y_;
    }

    friend fVector2D operator+(const fVector2D &u, const fVector2D &v)
    {
      return fVector2D(u.x_ + v.x_, u.y_ + v.y_);
    }

  private:
    float x_;
    float y_;
  };

} // namespace homework
