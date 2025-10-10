#pragma once

#include <string>

namespace homework {

enum class Color{
        red, green, yellow
    }; //creates an enum class named Color with three attributes



class Fruit {
    private:
        std::string name;
        Color color;
    
    public:
        Fruit(const std::string& name, Color color) : name(name), color(color) {} //constructor similar to ex. 2
    
        std::string getName() {return name; }
        Color getColor() {return color;}

    virtual std::string getTaste() {return "fruity";}

};

// (c) TO DO: Implement a class called "Apple" that inherits from "Fruit"
// implement the constructor and the "getTaste" method
// The taste of an apple is "sweet"
// The constructor should take a "Color" as argument and pass the name "apple"
// to the base class constructor

class Apple: public Fruit{
    public:
        Apple(Color color) : Fruit("apple", color) {}

        std::string getTaste() {
            return "sweet";
        }
};


} // namespace homework
