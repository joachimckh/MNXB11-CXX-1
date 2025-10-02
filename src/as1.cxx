#include "as1.hpp"
#include <cmath>    
#include <bitset>  
#include <vector>
#include <numeric>


namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { 
    x++;
    return; 
}

bool isOdd(int x) { 
    // other option is to use 
    // return x%2 == 1;
    if (x<0)
    {
        x*=-1;
    }
    
    int last_digit{x%10};
    int len = (int)(std::log2(last_digit));
    std::string binary_number{std::bitset<64>(last_digit).to_string().substr(64 - len - 1)};
    int binary_len{binary_number.length()-1};
    
    switch (binary_number[binary_len]) {
        case '1':
            return true;
        case '0':
            return false;
        default:
            std::cout << "Error in isOdd" << std::endl;
            std::cout << last_digit << binary_number << binary_len << std::endl;
            return false;
    }

}

int floatToInt(float x) { 
    // another option is to use
    // return std::round(x);
    int count{0};
    if (x<0)
    {
        return -floatToInt(-x);
    }
    
    while (x>1)
    {
        count++;
        x--;
    }
    if (x<0.5)
    {
        return count;
    }
    else if (x>=0.5)
    {
        return ++count;
    }
    return 1; 
}

int factorial(int n) { 
    
    // optional solution
    // if (n==1){
    // return 1;}
    // if (n==0){
    // return 1;}
    // if (n<0){
    // return -1;}
    // return n*factorial(n-1)
    if (n<0){
        return -1;
    }
    std::vector<int> numbers{1};
    for (size_t i = 2; i <= n; i++)
    {
        numbers.push_back(i);
    }
    auto first = numbers.begin();
    auto last = numbers.end();
    int mult{std::accumulate(first,last,1, [](int x, int y){return x*y;})};

    return mult; 
}

}; // namespace homework
