#include "as1.hpp"
#include "as2.hpp"
#include "as3.hpp"
#include <iostream>

int main() {
    using namespace homework;

    std::cout << "-- as1 functions test --" << std::endl;
    printHello();

    int a = 7;
    AddOneRef(a);
    std::cout << "AddOneRef(7) => " << a << std::endl;

    std::cout << "isOdd(11): " << isOdd(11) << std::endl;
    std::cout << "isOdd(222): " << isOdd(222) << std::endl;
    std::cout << "floatToInt(3.14): " << floatToInt(3.14f) << std::endl;
    std::cout << "factorial(8): " << factorial(8) << std::endl << std::endl;

    std::cout << "---- as2 functions test ----" << std::endl;
    Foo foo;
    std::cout << "Foo::bar(): " << foo.bar() << std::endl;
    std::cout << "Foo::baz(): " << foo.baz() << " (x=" << foo.x << ")" << std::endl;

    fVector2D v1(1.0f, 2.0f);
    fVector2D v2(3.0f, 5.0f);
    fVector2D v3 = v1 + v2;                

    if (v3 == fVector2D(4.0f, 7.0f)) {
        std::cout << "sucess" << std::endl;
    } else {
        std::cout << "test failed" << std::endl;
    }

    std::cout << std::endl << "--- as3 classes tes ---" << std::endl;
    Apple myapple(Color::green);
    std::cout << "Fruit name: " << myapple.getName()
              << ", taste: " << myapple.getTaste() << std::endl;

    return 0;
}



