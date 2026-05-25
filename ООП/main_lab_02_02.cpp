#include <iostream>
#include "Triangle.h"
#include "windows.h"
using namespace std;
/*
int main() {
    SetConsoleOutputCP(1251);

    Triangle t;
    cout << "--- Лабораторна робота №2 Належність точок до трикутника ---" << endl;
    cout << "Введіть координати вершин (x1 y1 x2 y2 x3 y3): ";
    if (!(cin >> t.A.x >> t.A.y >> t.B.x >> t.B.y >> t.C.x >> t.C.y)) return 1;

    if (t.Perevirka_ploshchi()) {
        cout << "Помилка: Трикутник вироджений (площа 0). Робота неможлива." << endl;
        return 1;
    }

    int n;
    cout << "\nСкільки точок ви будем перевірити? ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        Point p;
        cout << "\nТочка №" << i + 1 << " (x y): ";
        cin >> p.x >> p.y;

        int result = t.Perevirka_chu_na_storoni(p);

        if (result == 1) {
            cout << "Точка лежить всередині трикутника." << endl;
        }
        else if (result == 2) {
            cout << "Точка лежить на межі трикутника." << endl;
        }
        else {
            cout << "Точка лежить зовні трикутника." << endl;
        }
    }

    return 0;
}
*/
