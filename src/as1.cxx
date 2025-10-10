#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { 
    x += 1; 
}

// for the main
// int i = 2;

//std::cout << i << std::endl;

//homework::AddOneRef(i);

//std::cout << i << std::endl;


bool isOdd(int x) { 
    return (x % 2 != 0); 
}

int floatToInt(float x) { 
    int y = (int)x;
}

// for the main

//float x = 4.2;

    //std::cout << homework::floatToInt(x) << std::endl;

int factorial(int n) { 
    return 0; 
}

}; // namespace homework
