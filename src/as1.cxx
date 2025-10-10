#include "as1.hpp"

namespace homework
{

    void printHello() { std::cout << "Hello, World!" << std::endl; } // prints Hello, World!

    void AddOneRef(int &x)
    { // Adds one to the value of x using a reference
        int *const x1 = &x;
        *x1 += 1;
        std::cout << *x1 << std::endl;
        return;
    }

    bool isOdd(int x)
    { // Checks if x is odd or even
        if (x % 2 != 0)
        {
            std::cout << "true/odd" << std::endl;
            return true;
        }
        else
        {
            std::cout << "false/even" << std::endl;
            return false;
        }
    }

    int floatToInt(float x)
    { // Casts a float into an int
        int y = static_cast<int>(x);
        std::cout << y << std::endl;
        return y;
    }

    int factorial(int n)
    { // Returns the factorial of n
        if (n < 0)
        { // Returns -1 if n is negative
            std::cout << -1 << std::endl;
            return -1;
        }
        else if (n == 0)
        { // Returns 1 if n is 0
            std::cout << 1 << std::endl;
            return 1;
        }
        else
        {
            int sum{n};
            for (int k{n - 1}; k > 1; k--)
            {
                sum *= k;
            }
            std::cout << sum << std::endl;
            return sum;
        }
    }

}; // namespace homework
