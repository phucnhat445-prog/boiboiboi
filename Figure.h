#pragma once
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
class Figure
{
private:
	static vector<Figure*> arr;
protected:
 static Figure* add(Figure* f) {
        if (f == nullptr) return nullptr;
        arr.push_back(f);
        return f;
    }

    static Figure* createObject(const char* clsName) {
        if (clsName == NULL) return NULL;
        for (size_t i = 0; i < arr.size(); i++) {
            if (strcmp(clsName, arr[i]->className()) == 0) {
                return arr[i]->Clone();
            }
        }
        return NULL;
    }
public:
    static const vector<Figure*>& getSampleList() { return arr; }

    virtual const char* className() = 0;
    virtual Figure* Clone() = 0;
    virtual ~Figure() {}
};

#define INIT_MEMBER(CLASS) static Figure* BootTrapObject##CLASS;
#define INIT_OBJECT(CLASS) Figure* CLASS::BootTrapObject##CLASS = Figure::add(new CLASS());
#define INIT_METHOD(CLASS) virtual Figure* Clone() override { return new CLASS(*this); } \
virtual const char* className() override { return #CLASS; }
