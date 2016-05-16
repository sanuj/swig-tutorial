template <class T>
Square<T>::Square(T s) {
    this->side = s;
}

template <class T>
void Square<T>::setSide(T s) {
    this->side = s;
}

template <class T>
T Square<T>::getSide() {
    return this->side;
}

template <class T>
T Square<T>::area() {
    return this->side * this->side;
}