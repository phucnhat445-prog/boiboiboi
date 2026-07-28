#include "Circle.h"
#include <iostream>
using namespace std;

INIT_OBJECT(Circle)

Circle::Circle(float r) : radius(r) {}

Circle::Circle(const Circle& other) : radius(other.radius) {}

float Circle::Area() {
    return 3.14159f * radius * radius;
}

void Circle::Input(istream& is) {
    cout << "Nhap ban kinh: ";
    is >> radius;
}

void Circle::Output(ostream& os) {
    os << "Circle: radius=" << radius << ", Area=" << Area();
}

istream& operator>>(istream& is, Circle& c) {
    c.Input(is);
    return is;
}

ostream& operator<<(ostream& os, const Circle& c) {
    os << "Circle: radius=" << c.radius;
    return os;
}