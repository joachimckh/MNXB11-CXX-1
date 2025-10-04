#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { x += 1; } // adds 1 to some variable x defined in main

bool isOdd(int x) { 
    return x % 2 != 0;}

int floatToInt(float x) { return 0; }

int factorial(int n) { return 0; }

}; // namespace homework
