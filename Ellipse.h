#pragma once
#include "Figure.h"
#include <iostream>
using namespace std;

class Ellipse : public Figure {
    INIT_MEMBER(Ellipse)

protected:
    float semiMajor, semiMinor; // Bán trục lớn và bán trục nhỏ

public:
    Ellipse(float a = 0, float b = 0);
    Ellipse(const Ellipse& other);

    INIT_METHOD(Ellipse)

        virtual float Area();
    virtual void Input(istream& is);
    virtual void Output(ostream& os);

    friend istream& operator>>(istream& is, Ellipse& e);
    friend ostream& operator<<(ostream& os, const Ellipse& e);

    virtual ~Ellipse() {}
};