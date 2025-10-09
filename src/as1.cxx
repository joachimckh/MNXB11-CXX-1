#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { x += 1; std::cout<<x<< std::endl;}

bool isOdd(int x) { if (x%2==0) {std::cout<<"false\n"; return false;} else { std::cout<<"true\n"; return true; }}

int floatToInt(float x) {int i = static_cast<int>(x); std::cout<<i<<std::endl; return i; }

int factorial(int n) {if (n<=0) {std::cout<<"negative input"<<std::endl; return -1;} else { int fac = 1; for (int init = 1; init<=n; init+=1) {fac = fac*init;} std::cout<<fac<<std::endl; return fac;} }

}; // namespace homework
