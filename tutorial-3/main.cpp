#include <iostream>
#include "square.hpp"

int main() {
    Square<int> sq(4);
    std::cout << "Area: " << sq.area() << std::endl;
    return 0;
}