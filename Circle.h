#pragma once
#include "Figure.h"
#include <iostream>
using namespace std;

class Circle : public Figure {
    INIT_MEMBER(Circle)

protected:
    float radius;

public:
    Circle(float r = 0);
    Circle(const Circle& other);

    INIT_METHOD(Circle)

        virtual float Area();
    virtual void Input(istream& is);
    virtual void Output(ostream& os);

    friend istream& operator>>(istream& is, Circle& c);
    friend ostream& operator<<(ostream& os, const Circle& c);

    virtual ~Circle() {}
};