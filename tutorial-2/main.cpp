#include <iostream>
#include "square.hpp"

int main() {
    Square sq(4);
    std::cout << "Area: " << sq.area() << std::endl;
    return 0;
}