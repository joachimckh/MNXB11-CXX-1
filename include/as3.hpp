#pragma once

#include <string>

namespace homework {
// Hint: Lecture 5 slides

// As 3.1 Lets create our own type in C++ and use it for a custom class of
// fruits 
// (a) TO DO: Implement your type (Hint: enum class). Name it "Color" and add three colors:
// red, green, yellow
enum class Color {
    red,
    green,
    yellow
};

std::string printColor(Color color); //values in enum are not printable, need to convert to string

// (b) TO DO: Implement a class called "Fruit" that has a constructor taking a
// string and a "Color" and two methods: "getName" and "getColor" Also implement
// a pure virtual method "getTaste" that returns a string
class Fruit {  //this is a base class
  public:
    // constructor, string named name, and color 
    Fruit(const std::string& name, Color color);

    // methods
    std::string getName(); 
    Color getColor();

    // virtual method 
    virtual ~Fruit() = default; // destructor needed, otherwise it does not compile
    virtual std::string getTaste() const = 0;
  private:
    // private makes the following information belong to each fruit object.
    std::string name; // can be called from inherited class by Apple.name
    Color color;  // can be called by Apple.color

};

// (c) TO DO: Implement a class called "Apple" that inherits from "Fruit"
// implement the constructor and the "getTaste" method
// The taste of an apple is "sweet"
// The constructor should take a "Color" as argument and pass the name "apple"
// to the base class constructor

class Apple : public Fruit {
  public:
    Apple(Color color); // the constructor is what arguments I have to give in main

    std::string getTaste() const override; // override tells the compiler to replace virtual method in fruit class with this one

};

} // namespace homework
