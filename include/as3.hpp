#pragma once
#include <iostream>
#include <string>

namespace homework {
// Hint: Lecture 5 slides

// As 3.1 Lets create our own type in C++ and use it for a custom class of
// fruits 
// (a) TO DO: Implement your type (Hint: enum class). Name it "Color" and add three colors:
// red, green, yellow


//3.1a
enum class Color {red, green, yellow};
//asked chat gpt why my enum class isnt able to be used in my fruit class

// (b) TO DO: Implement a class called "Fruit" that has a constructor taking a
// string and a "Color" and two methods: "getName" and "getColor" Also implement
// a pure virtual method "getTaste" that returns a string

//3.1b
//consulted notes i took on lecture 5 and from a C++ lecture on youtube
//asked chat gpt if my code was working (i wrote pretty much everything on my own :D)
//chat told me that i need to clean up my constructor by arranging stuff
//differently and that i need to store Color correctly (i accidentally called it int)
class Fruit {
    public:
        std::string name;
        Color color;

    Fruit(std::string n, Color c){
        this->name = n;
        this->color = c;
    };

    std::string getName(){
        return name;
    };

    Color getColor(){
        return color;
    };

    virtual std::string getTaste() = 0; //pure virtual thingy requires =0 i think
};


// (c) TO DO: Implement a class called "Apple" that inherits from "Fruit"
// implement the constructor and the "getTaste" method
// The taste of an apple is "sweet"
// The constructor should take a "Color" as argument and pass the name "apple"
// to the base class constructor


//3.1c
//i didnt understand why i had compiling issues
//i assigned values here instead of base class constructor like the instructions say
//partially because i did not understand what it meant
//so i had to use somerhing  called an initializer list ?

class Apple: public Fruit{
    public:
        Apple(Color c) : Fruit("apple", c) {};

        std::string getTaste() {
            return "sweet";
        };
    };
}
// namespace homework
