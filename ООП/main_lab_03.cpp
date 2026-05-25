#include <iostream>
#include "windows.h"
#include <cmath>
#include "Dyhotomia_class.h"

using namespace std;
/*
int main() {
    SetConsoleOutputCP(1251);
    Dyhotomia_class* dyh = new Dyhotomia_class();

    dyh->SetVolumes(1.0, 2.0);
    dyh->SetTolerance(0.000001);

    double D = dyh->MetodDychotomia();
    double N = dyh->MetodNewton();

    cout << "Результати розв'язання рівняння:" << endl;

    cout << "Метод дихотомії: x = " << D << endl;
    cout << "Метод Ньютона:   x = " << N << endl;
    printf("%11f", D);
    cout << endl;
    printf("%11f", N);
    cout << endl;
    cout << "Перевірка дихотомія: " << dyh->f_perevirka(D)<<endl;
    cout << "Перевірка Ньютона: " << dyh->f_perevirka(N)<<endl;
    delete dyh;
    
    return 0;
}
*/