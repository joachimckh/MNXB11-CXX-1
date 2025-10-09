#include <iostream>
#include "as1.hpp"

namespace homework {

void printHello() { 
    std::cout << "Hello, World!" << std::endl; 
}

void AddOneRef(int &x) { 
    x++;
    return; 
}

bool isOdd(int x) { 
    if (x % 2 == 0)
        return false; 
    else
        return true;
}

int floatToInt(float x) {
    return static_cast<int>(x); 
    }

int factorial(int n) { 
    int factorial = 1;
    if (n < 0){
        // std::cout << "factorial not possible of negative number";
        return -1;
    }
    else {
        for (int i = 1;
        i <=n;
        i++) { 
        factorial *= i;
    }
    return factorial;
    }
}

}; // namespace homework
