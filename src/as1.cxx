#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) {
    x += 1; // increment the value referred to by x 
}

bool isOdd(int x) {
    return x % 2 !=0; //true if remainder when divided by 2 is 1 
}

int floatToInt(float x) {
    return static_cast<int>(x); // makes float into integer
}

int factorial(int n) {
    if (n < 0) return -1; // no negative numbers
    if (n == 0) return 1; // 0 factorial is always 1
    return n * factorial(n-1); 
}

}; // namespace homework

