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
enum Color {
    red,
    green,
    yellow
};

class Fruit
{
public:
    
    Fruit(const std::string& name, Color color)
        : name_(name), color_(color) {}

    std::string getName() const { return name_; }

    Color getColor() const { return color_; }

    virtual std::string getTaste() const = 0;

    virtual ~Fruit() = default;

private:
    std::string name_;
    Color color_;
};

class Apple : public Fruit {
    
public:
    Apple(Color color) : Fruit("apple", color) {}

    std::string getTaste() const override {
        return "sweet";
    }
};

} // namespace homework
