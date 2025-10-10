/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <iostream>

int main() { 
  // Example for as1.0
  homework::printHello();

int x {2};
homework::AddOneRef(x);
std::cout << x << std::endl;
std::cout << homework::isOdd(5) << std::endl;
std::cout << homework::floatToInt(3.12) << std::endl;
std::cout << homework::factorial(x) << std::endl;

using namespace homework;

    Foo foo;
    std::cout << "foo.bar() = " << foo.bar() << std::endl;

    float bazResult = foo.baz();
    std::cout << "foo.baz() = " << bazResult << ", foo.x = " << foo.x << std::endl;

    auto vec = foo.quux();
    std::cout << "foo.quux() = { ";
    for (auto v : vec) std::cout << v << " ";
    std::cout << "}" << std::endl;


    fVector2D v1(1.0f, 2.0f);
    fVector2D v2(3.0f, 4.0f);

    fVector2D sum = v1 + v2;
    std::cout << "v1 + v2 = " << sum << std::endl;

    bool equal = (v1 == v2);
    std::cout << "v1 == v2 ? " << std::boolalpha << equal << std::endl;

    fVector2D v3(1.0f, 2.0f);
    std::cout << "v1 == v3 ? " << std::boolalpha << (v1 == v3) << std::endl;

    return 0;

homework::Apple apple(homework::Color::red);
    std::cout << "Apple created successfully!" << std::endl;
    std::cout << "Name: " << apple.getName() << std::endl;
    std::cout << "Taste: " << apple.getTaste() << std::endl;
    return 0;
}

