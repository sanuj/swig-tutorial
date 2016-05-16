#include "polygon.hpp"

class Square : public Polygon {
public:
    float side;
    Square(float s);
    void setSide(float s);
    float getSide();
    float area();
};