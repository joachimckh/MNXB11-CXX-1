#include "as1.hpp"

namespace homework {

void printHello() { 
    std::cout << "Hello, World!" << std::endl; 
}

void AddOneRef(int &x) { 
    x += 1; 
} // adds 1 to some variable x defined in main

bool isOdd(int x) { 
    return x % 2 != 0; // if I can divide by 2 (even) , return false
}

int floatToInt(float x) {
    return static_cast<int>(x); 
}

int factorial(int n) {
    if (n < 0){return -1;} // if this is the case, the following will not be executed (already returned something)
    
    int result = 1;
    for (int i= 1; i<=n; i += 1) { // this gives "properties" to for loop(variable i, condition, spacing)
        result *= i; // multiplies all i until i=n
    }
    return result;
}

}; // namespace homework
