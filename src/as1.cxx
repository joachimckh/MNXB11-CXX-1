#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { 
  x += 1;
}

bool isOdd(int x) { 
  return (std::abs(x % 2)); 
}

int floatToInt(float x) { 
  int y = static_cast<int>(x);
  return y;
}

int factorial(int n) { 
  int y;
  if (n < 0) {
    y = -1;
  }
  else {
    y = 1;
    for (int i = 1 ; i < n + 1 ; i++) {
      y *= i;
    }
  }
  return y; 
}

}; // namespace homework
