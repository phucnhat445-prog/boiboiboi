#include "Square.h"
#include <iostream>
using namespace std;

INIT_OBJECT(Square)

Square::Square(float s) : side(s) {}

Square::Square(const Square& other) : side(other.side) {}

float Square::Area() {
    return side * side;
}

void Square::Input(istream& is) {
    cout << "Nhap do dai canh: ";
    is >> side;
}

void Square::Output(ostream& os) {
    os << "Square: side=" << side << ", Area=" << Area();
}

istream& operator>>(istream& is, Square& s) {
    s.Input(is);
    return is;
}

ostream& operator<<(ostream& os, const Square& s) {
    os << "Square: side=" << s.side;
    return os;
}