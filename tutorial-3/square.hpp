#include "polygon.hpp"

template <class T>
class Square : public Polygon<T> {
public:
    T side;
    Square(T s);
    void setSide(T s);
    T getSide();
    T area();
};

#include "square.cpp"