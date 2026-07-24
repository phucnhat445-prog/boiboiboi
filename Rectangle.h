#pragma once
#include "Figure.h"
#include <iostream>
using namespace std;

class Rectangle : public Figure {
    INIT_MEMBER(Rectangle)      

protected:
    float width, height;

public:
    Rectangle(float w = 0, float h = 0);
    Rectangle(const Rectangle& other);

    INIT_METHOD(Rectangle)     

        virtual float Area();
    virtual void Input(istream& is);
    virtual void Output(ostream& os);

    friend istream& operator>>(istream& is, Rectangle& r);
    friend ostream& operator<<(ostream& os, const Rectangle& r);

    virtual ~Rectangle() {}
};