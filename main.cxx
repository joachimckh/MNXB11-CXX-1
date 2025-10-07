#include "as2.hpp"
#include <iostream>

using namespace homework;

int main() {
    std::cout << "=== Task 2 Test ===\n\n";

    // Test Foo struct
    Foo f;
    std::cout << "Foo::bar() = " << f.bar() << "\n";

    std::cout << "Foo::baz() = " << f.baz() << ", x = " << f.x << "\n";

    auto v = f.quux();
    std::cout << "Foo::quux() = ";
    for (auto d : v) std::cout << d << " ";
    std::cout << "\n\n";

    // Test fVector2D operators
    fVector2D a(1, 2), b(3, 4);
    auto c = a + b;
    std::cout << "fVector2D a+b == (4,6)? " 
              << ((c == fVector2D(4,6)) ? "true" : "false") << "\n";

    fVector2D d(0,0);
    std::cout << "fVector2D d == (0,0)? " 
              << ((d == fVector2D(0,0)) ? "true" : "false") << "\n";

    return 0;
}
