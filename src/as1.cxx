#include "/home/kiam/git/MNXB11-CXX-1-kiam/include/as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

int AddOneRef(int &x) { 
    std::cout << (*&x +1) << std::endl;
    return *&x + 1; }

bool isOdd(int x) { 
    if (x % 2 == 0) {
        std::cout << "Number is even" << std::endl;
        return false; }
    else { 
        std::cout << "Number is odd" << std::endl;
        return true;}
}

int floatToInt(float x) {
    int intValue = static_cast<int>(x);
    std::cout << "The int value is :" << intValue << std::endl;
    return intValue; 
}

int factorial(int n){
    if (n < 1) {
        std::cout << "Please input a positive number" << std::endl;
        return -1;
    } 
    else {
        if (n== 0 || n==1) {
        return 1;
    }
        else {
            return n * factorial(n - 1);}
        //doesn't print if I put the print of factorial here instead of in header
        //right now it prints ugly if input is a negative number
    }
};
} // namespace homework
