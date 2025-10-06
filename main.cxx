/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <iostream>

int main() {
    using namespace homework;
//Part1 of the homework testing
    printHello();
   
    int a = 5;
    AddOneRef(a);
    std::cout << "AddOneRef result: " << a << "\n";

    std::cout << "isOdd(5): " << isOdd(20) << "\n";
    std::cout << "floatToInt(3.7): " << floatToInt(3.7f) << "\n";
    std::cout << "factorial(5): " << factorial(5) << "\n";
    std::cout << "factorial(-2): " << factorial(-2) << "\n";

// Part2 of the homework testing

    Foo f;

    // Test for bar()
    std::cout << "Foo::bar() = " << f.bar() << std::endl;

    // Test for baz()
    float resultBaz = f.baz();
    std::cout << "Foo::baz() = " << resultBaz << ", and x = " << f.x << std::endl;

    // Test for quux()
    std::vector<double> resultQuux = f.quux();
    std::cout << "Foo::quux() = { ";
    for (double v : resultQuux) {
        std::cout << v << " ";
    }
    std::cout << "}" << std::endl;


// 2.2
    fVector2D v1(1.0f, 2.0f); //defines the first fVector
    fVector2D v2(3.0f, 4.0f);


    fVector2D vSum = v1 + v2; //Testing operator+
    std::cout << "v1 + v2 computed." << std::endl;

    // Testing operator==
    fVector2D v3(4.0f, 6.0f);
    std::cout << "vSum == v3 ? " << (vSum == v3 ? "true" : "false") << std::endl;

    //Test for part 3
    homework::Apple myApple(homework::Color::red);

    std::cout << "Name: " << myApple.getName() << std::endl;

    std::cout << "Color: " << colorToString(myApple.getColor()) << std::endl;

    std::cout << "Taste: " << myApple.getTaste() << std::endl;
    return 0;
}
