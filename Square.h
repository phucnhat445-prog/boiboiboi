#pragma once
#include "Figure.h"
#include <iostream>
using namespace std;

class Square : public Figure {
    INIT_MEMBER(Square)

protected:
    float side;

public:
    Square(float s = 0);
    Square(const Square& other);

    INIT_METHOD(Square)

        virtual float Area();
    virtual void Input(istream& is);
    virtual void Output(ostream& os);

    friend istream& operator>>(istream& is, Square& s);
    friend ostream& operator<<(ostream& os, const Square& s);

    virtual ~Square() {}
};