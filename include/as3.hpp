#pragma once

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

enum class Color {
    red,
    yellow,
    green
};

std::string colorToString(Color c); //this changes the enum from integer to string

    class Fruit {
        public:

    Fruit(const std::string& name, Color color) //This is the constructor- sets the names and color
        : name_(name), color_(color) {}


    std::string getName() const { return name_; } // Will return the fruits name
    Color getColor() const { return color_; } // will return the fruits color


    virtual std::string getTaste() const = 0; //This is the virtual method that returns a string

private:
    std::string name_;
    Color color_;
    };

class Apple : public Fruit {  // The class called apple inherits from fruit
public:

    Apple(Color color) // This is the constructor, and it will take a color
        : Fruit("apple", color) {}  // Calls base class constructor and passes apple and the colour through it

    std::string getTaste() const override {
        return "sweet";
    }
};
} // namespace homework
