#include "as3.hpp"
#include <iostream>

using namespace homework;

int main() {
    Apple a(Color::red);
    std::cout << a.getName() << " is color "
              << static_cast<int>(a.getColor())
              << " and tastes " << a.getTaste() << "\n";

    return 0;
}
