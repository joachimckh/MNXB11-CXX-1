#include "as1.hpp"
#include <iostream>

namespace homework {

void printHello() {
    std::cout << "Hello, World!" << std::endl;
}

void AddOneRef(int &x) {
    x = x + 1;
}


bool isOdd(int x) {
    return x % 2 != 0;
}

int floatToInt(float x) {
    return (int)x;
}


int factorial(int n) {
    if (n < 0) return -1;
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

}
