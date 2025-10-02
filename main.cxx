#include "as1.hpp"
#include <iostream>

int main() {
    using namespace homework;

    printHello(); 
    
    int a = 5;
    AddOneRef(a);
    std::cout << "AddOneRef result: " << a << "\n";

    std::cout << "isOdd(5): " << isOdd(5) << "\n";
    std::cout << "floatToInt(3.7): " << floatToInt(3.7f) << "\n";
    std::cout << "factorial(5): " << factorial(5) << "\n";
    std::cout << "factorial(-2): " << factorial(-2) << "\n";

    return 0;
}
