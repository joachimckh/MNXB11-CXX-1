#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { x += 1; } // adds 1 to some variable x defined in main

bool isOdd(int x) { 
    return x % 2 != 0;}

int floatToInt(float x) {return static_cast<int>(x);}

int factorial(int n) {
    if (n < 0){return -1;}
    
    int result = 1;
    for (int i= 1; i<=n; i += 1) {
        result *= i;
    }
    return result;
}

}; // namespace homework
