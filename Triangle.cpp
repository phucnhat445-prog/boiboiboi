#include "Triangle.h"
#include <iostream>
using namespace std;

INIT_OBJECT(Triangle)

Triangle::Triangle(float b, float h) : baseSide(b), height(h) {}

Triangle::Triangle(const Triangle& other) : baseSide(other.baseSide), height(other.height) {
}

float Triangle::Area() {
    return (baseSide * height) / 2.0f;
}

void Triangle::Input(istream& is) {
    cout << "Nhap canh day : "; is >> baseSide;
    cout << "Nhap chieu cao: "; is >> height;
}

void Triangle::Output(ostream& os) {
    os << "Triangle: base=" << baseSide << ", height=" << height << ", Area=" << Area();
}

istream& operator>>(istream& is, Triangle& t) {
    t.Input(is);
    return is;
}

ostream& operator<<(ostream& os, const Triangle& t) {
    os << "Triangle: base=" << t.baseSide << ", height=" << t.height;
    return os;
}