#include <iostream>
#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

//void AddOneRef(int &x) { return; }

bool isOdd(int x) {
    if ( x % 2== 0)
        return true;
    else
        return false;
}

int floatToInt(float x) { return 0; }

int factorial(int n) { 
    if (n == 0)
        return 1;
    return n * factorial(n-1);
}

}; // namespace homework
