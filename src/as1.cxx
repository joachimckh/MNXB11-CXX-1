#include "as1.hpp"
#include <iostream>

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { ++x; }

bool isOdd(int x) { return (x % 2) != 0; }

int floatToInt(float x) { return static_cast<int>(x); }

// 0! = 1, 1! = 1; simple iterative version
int factorial(int n) {
    if (n < 0) return -1;     // guard (tests likely use n >= 0)
    int result = 1;
    for (int i = 2; i <= n; ++i) result *= i;
    return result;
}

} // namespace homework
