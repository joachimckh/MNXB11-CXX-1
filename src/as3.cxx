#include "as3.hpp"

namespace homework {

std::string colorToString(homework::Color c) { //enum class does so it is an integer
    switch(c) {
        case homework::Color::red:    return "Red";
        case homework::Color::green:  return "Green";
        case homework::Color::yellow: return "Yellow";
    }
    return "Unknown"; // If none of the correct colors were inputted
}

} // namespace homework

