#include <iostream>
#include <string>
#include "Figure.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"   
#include "Ellipse.h"  
#include "Circle.h"   

using namespace std;

int main() {
    Figure* arr[] = {
        new Rectangle(),
        new Triangle(),
        new Square(),
        new Circle(),
        new Ellipse()
    };
    int narr = sizeof(arr) / sizeof(Figure*);

    cout << "Cac hinh co san:";
    for (int i = 0; i < narr; i++) {
        cout << " " << arr[i]->className();
    }
    cout << endl;

    string inputName;
    cout << "Nhap ten hinh ban muon tao: ";
    cin >> inputName;

    Figure* rec = Figure::createObject(inputName.c_str());

    if (rec != nullptr) {

        cout << "User's choice: " << rec->className() << endl;

        cout << "\n--- Nhap du lieu ---" << endl;
        rec->Input(cin);

        cout << "\n--- Ket qua ---" << endl;
        rec->Output(cout);
        cout << endl;

        delete rec;
    }
    else {
        cout << "Ten hinh khong hop le!" << endl;
    }

    for (int i = 0; i < narr; i++) {
        delete arr[i];
    }

    return 0;
}