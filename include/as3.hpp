#pragma once
#include <iostream>
#include <string>

namespace homework {
// Hint: Lecture 5 slides

// As 3.1 Lets create our own type in C++ and use it for a custom class of
// fruits 
// (a) TO DO: Implement your type (Hint: enum class). Name it "Color" and add three colors:
// red, green, yellow

// (b) TO DO: Implement a class called "Fruit" that has a constructor taking a
// string and a "Color" and two methods: "getName" and "getColor" Also implement
// a pure virtual method "getTaste" that returns a string

// (c) TO DO: Implement a class called "Apple" that inherits from "Fruit"
// implement the constructor and the "getTaste" method
// The taste of an apple is "sweet"
// The constructor should take a "Color" as argument and pass the name "apple"
// to the base class constructor

enum class Color {red, green, yellow};

class Fruit {

private: 

std::string name;

Color color;

public:

//error, cannot bind non-const lvalue reference of type std::string&

Fruit (const std::string& name, Color color): name(name), color(color) {}

//getter for the name variable/object
std::string getName() const { return name; }

//getter for the colors in the Color class
Color getColor() const { return color; }

virtual std::string getTaste() const = 0;

};

class Apple: public Fruit {
    public: 
    //Apple() = default; evidently not needed

    Apple(Color color)
        : Fruit("apple", color) {}

    //must be overridden due to the virtual nature
    std::string getTaste() const override {
        return " is sweet";
    }
};

} // namespace homework
