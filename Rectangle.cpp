#include "Rectangle.h"
#include <iostream>
using namespace std;

INIT_OBJECT(Rectangle)

Rectangle::Rectangle(float w, float h) : width(w), height(h) {}

Rectangle::Rectangle(const Rectangle& other) : width(other.width), height(other.height) {
}

float Rectangle::Area() {
    return width * height;
}

void Rectangle::Input(istream& is) {
    cout << "Nhap chieu rong: "; is >> width;
    cout << "Nhap chieu cao : "; is >> height;
}

void Rectangle::Output(ostream& os) {
    os << "Rectangle: width=" << width << ", height=" << height << ", Area=" << Area();
}

istream& operator>>(istream& is, Rectangle& r) {
    r.Input(is);
    return is;
}

ostream& operator<<(ostream& os, const Rectangle& r) {
    os << "Rectangle: width=" << r.width << ", height=" << r.height;
    return os;
}