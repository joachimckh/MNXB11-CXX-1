#include "as1.hpp"

namespace homework {

void printHello() 
{ 
    std::cout << "Hello, World!" << std::endl; 
}

void AddOneRef(int &x) 
{ 
    x += 1; 
}

bool isOdd(int x) 
{ 
    bool b = true;
    
    if (x%2 == 0)   // if x is even b <-- false
        b = false;

    return b; // return true if not x = even (lol)
}

int floatToInt(float x) 
{ 
    return static_cast<int>(x);
}

int factorial(int n) 
{ 
    if (n < 0)  // take care of negatives
        return -1;

    if (n == 0) // take care of 0 because math
        return 1;

    return n*factorial(n-1); // recursive return
}

}; // namespace homework
