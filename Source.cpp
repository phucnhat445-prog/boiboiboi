#include <string>
#include "Figure.h"
#include "Rectangle.h"
#include "Point.h"
#include "Triangle.h"

using namespace std;
int main() {

    Figure* arr[] = {
        new Rectangle(),  new Triangle()
    };
    int narr = sizeof(arr) / sizeof(Figure*);

    string inputName;
    cout << "Nhap ten hinh (Rectangle, Triangle): ";
    cin >> inputName;

    Figure* rec = Figure::createObject(inputName.c_str());

    if (rec != nullptr) {
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