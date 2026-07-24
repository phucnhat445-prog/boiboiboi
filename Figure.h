#pragma once
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class Figure {
private:
    static vector<Figure*> arr;
protected:
    static Figure* createObject(const char* clsName) {
        if (clsName == NULL) return NULL;
        vector<Figure*>& arr = getArr();
        for (size_t i = 0; i < arr.size(); i++) {
            if (strcmp(clsName, arr[i]->className()) == 0) {
                return arr[i]->Clone();
            }
        }
        return NULL;
    }

    static const vector<Figure*>& getSampleList() { return arr; }

    virtual void Input(istream& is) = 0;
    virtual void Output(ostream& os) = 0; // Bổ sung Output
    virtual float Area() = 0;

    virtual const char* className() = 0;
    virtual Figure* Clone() = 0;
    virtual ~Figure() {}
};

#define INIT_MEMBER(CLASS) static Figure* BootTrapObject##CLASS;
#define INIT_OBJECT(CLASS) Figure* CLASS::BootTrapObject##CLASS = Figure::add(new CLASS());
#define INIT_METHOD(CLASS) virtual Figure* Clone() override { return new CLASS(*this); } \
virtual const char* className() override { return #CLASS; }