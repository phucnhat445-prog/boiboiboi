#pragma once
#include "Figure.h"
#include <iostream>
using namespace std;

class Triangle : public Figure {
    INIT_MEMBER(Triangle)       

protected:
    float baseSide, height;     

public:

    Triangle(float b = 0, float h = 0);
    Triangle(const Triangle& other);

    INIT_METHOD(Triangle)       

        virtual float Area();
    virtual void Input(istream& is);
    virtual void Output(ostream& os);

    friend istream& operator>>(istream& is, Triangle& t);
    friend ostream& operator<<(ostream& os, const Triangle& t);

    virtual ~Triangle() {}
};