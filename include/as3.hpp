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
        green,
        yellow
        

    };

    inline std::string to_string(Color c) {
    switch (c) {
        case Color::red:    return "Red";
        case Color::green:  return "Green";
        case Color::yellow: return "Yellow";
        default:            return "Unknown";
    }
}

    class Fruit {
        public:
            Fruit(std::string name, Color col){
                _name = name;
                _colour = col;
            }
            Fruit() = default;
            std::string getName(){
                return _name;
            }
            Color getColor(){
                return _colour;
            }
            virtual std::string getTaste() = 0;

        private:
            std::string _name;
            Color _colour;
    };

    class Apple : public Fruit {
        public:
            Apple(Color col) : Fruit("apple",col){};
            std::string getTaste() override {
                return Taste;
            }
        private:
            std::string Taste{"sweet"};

    };

} // namespace homework
