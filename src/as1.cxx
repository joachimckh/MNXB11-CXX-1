#include "as1.hpp"

namespace homework {

void printHello() { 
    std::cout << "Hello, World!" << std::endl;  //Prints Hello World
}

void AddOneRef(int &x) { //Adds one to x
    x += 1;
}

bool isOdd(int x) { //Checks if x is odd or ever
    if (x%2 == 0){
        return false;
    }
    else {
        return true;
    }
}

int floatToInt(float y) { //Casts a float to an int
    return static_cast<int>(y); 
}

int factorial(int n) { //Returns the factorial of n
    if (n<0) return -1;
    if (n == 0) return 1;
    return n * factorial(n-1);
}

}; // namespace homework
