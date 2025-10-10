/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include <iostream>
#include "as1.hpp"  // include your header file

int main() {
    using namespace homework;  // so we can call functions directly

    // Test printHello
    printHello();

    // Test AddOneRef
    int a = 5;
    AddOneRef(a);
    std::cout << "After AddOneRef: " << a << std::endl;

    // Test isOdd
    std::cout << "isOdd(3): " << isOdd(3) << std::endl;
    std::cout << "isOdd(4): " << isOdd(4) << std::endl;

    // Test floatToInt
    float f = 3.9;
    std::cout << "floatToInt(3.9): " << floatToInt(f) << std::endl;

    // Test factorial
    std::cout << "factorial(5): " << factorial(5) << std::endl;
    std::cout << "factorial(-2): " << factorial(-2) << std::endl;

    return 0;
}
