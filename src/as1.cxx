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
    return (x%2 != 0); 
}

// the % is the modulus operator similarly in python

// for the main 

//int x = 13;

//std::cout << x << std::endl;

//std::cout << homework::isOdd(x) << std::endl;

int floatToInt(float x) { 
    int y = (int)x;
}

// for the main

//float x = 4.2;

//std::cout << homework::floatToInt(x) << std::endl;

int factorial(int n) { 

    if (n < 0) {
        return -1;
    }

    else (n >= 0); {
        int m = 1, i;
        for (i=1; i <= n; i++)
        m *= i;
        return m;
    }

}

// the for loop structure builds the product
//i++, the loop sets to 1 and increases by 1 per interation

//for the main
//int n = -3;

    //std::cout << homework::factorial(n) << std::endl;

}; // namespace homework
