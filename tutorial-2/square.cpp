#include "square.hpp"

Square::Square(float s) {
    this->side = s;
}

void Square::setSide(float s) {
    this->side = s;
}

float Square::getSide() {
    return this->side;
}

float Square::area() {
    return this->side * this->side;
}