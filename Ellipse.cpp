#include "Ellipse.h"
#include <iostream>
using namespace std;

INIT_OBJECT(Ellipse)

Ellipse::Ellipse(float a, float b) : semiMajor(a), semiMinor(b) {}

Ellipse::Ellipse(const Ellipse& other) : semiMajor(other.semiMajor), semiMinor(other.semiMinor) {}

float Ellipse::Area() {
    return 3.14159f * semiMajor * semiMinor;
}

void Ellipse::Input(istream& is) {
    cout << "Nhap ban truc lon: ";
    is >> semiMajor;
    cout << "Nhap ban truc nho: ";
    is >> semiMinor;
}

void Ellipse::Output(ostream& os) {
    os << "Ellipse: semiMajor=" << semiMajor << ", semiMinor=" << semiMinor << ", Area=" << Area();
}

istream& operator>>(istream& is, Ellipse& e) {
    e.Input(is);
    return is;
}

ostream& operator<<(ostream& os, const Ellipse& e) {
    os << "Ellipse: semiMajor=" << e.semiMajor << ", semiMinor=" << e.semiMinor;
    return os;
}