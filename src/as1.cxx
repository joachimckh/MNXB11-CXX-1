#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) {++x;}

bool isOdd(int x) { 
    return x % 2 != 0;
}

int floatToInt(float x) { 
    return static_cast<int>(x);
}

int factorial(int n) { 
    int x;
    if (n < 0) {
    x = -1;
    } else {
        x = 1;
        for (; n > 0; n-=1) {
            x *= n;
        }
    }  
    return x;
}

}; // namespace homework
