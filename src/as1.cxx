#include "as1.hpp"

namespace homework {

void printHello() {
    std::cout << "Hello, World!" << std::endl; 
}

void AddOneRef(int &x) { 
    x = x+1;
}

bool isOdd(int x) { 
    
    if (x % 2 == 1) {
        return true;
    }
    else {
        return false;
    }

}

int floatToInt(float x) {
    return static_cast<int>(x);
}


int factorial(int n) { 
    if(n<0){
        return -1;
    }
    else{
        if (n == 0){
            return 1;
        }
        else{
            return n*factorial(n-1);
        }
    } 
}

}; // namespace homework
