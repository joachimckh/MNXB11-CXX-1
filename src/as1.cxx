#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { x++; }

bool isOdd(int x) { 
    if (x % 2 != 0) {
        return true;
    } else {
        return false;       
    }
}

int floatToInt(float x) {
    return static_cast<int>(x);
}

int factorial(int n) { 
    if (n < 0) return -1;
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

}; // namespace homework
