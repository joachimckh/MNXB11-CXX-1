#include <iostream>
#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"

int main() {
    using namespace homework;

    // Assignment 1
    int a = 1;
    AddOneRef(a);
    std::cout << "AddOneRef test: " << a << " (should be 2)" << std::endl;

    std::cout << "isOdd(3) = " << isOdd(3) << " (should be 1)" << std::endl;

    std::cout << "floatToInt(3.14f) = " << floatToInt(3.14f) << " (should be 3)" << std::endl;

    std::cout << "factorial(5) = " << factorial(5) << " (should be 120)" << std::endl;

    // Assignment 2
    Foo f;
    std::cout << "Foo::bar() = " << f.bar() << std::endl;
    std::cout << "Foo::baz() = " << f.baz() << std::endl;

    fVector2D v1(1.0f, 2.0f);
    fVector2D v2(3.0f, 4.0f);
    fVector2D v3 = v1 + v2;
    std::cout << "fVector2D + operator: (" << v3.getX() << ", " << v3.getY() << ")" << std::endl;

    // Assignment 3
    Apple apple(Color::red);
    std::cout << "Apple taste: " << apple.getTaste() << std::endl;

    return 0;
}
