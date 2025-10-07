#include "as1.hpp"
#include <cmath>

namespace homework {

// 1.0 — Already provided in template
void printHello() {
    std::cout << "Hello, World!" << std::endl;
}

// 1.1 — Takes reference and adds one
void AddOneRef(int &x) {
    x = x + 1;
}

// 1.2 — Returns true if number is odd
bool isOdd(int x) {
    return (x % 2 != 0);
}

// 1.3 — Cast float to int (C++ style)
int floatToInt(float x) {
    return static_cast<int>(x);
}

// 1.4 — Factorial (recursive)
int factorial(int n) {
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

} // namespace homework

