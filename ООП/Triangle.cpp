#include "Triangle.h"
#include <cmath>

double Vidstan(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

double Triangle::area() const {
    double s = 0.5 * fabs(A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y));
    return s;
}

bool Triangle::Perevirka_ploshchi() const {
    return area() < 1e-9;
}

bool Tochka_lechut(Point M, Point N, Point P) {
    double distMN = Vidstan(M, N); 
    double distMP = Vidstan(M, P); 
    double distPN = Vidstan(P, N); 

    return fabs((distMP + distPN) - distMN) < 1e-7;
}

int Triangle::Perevirka_chu_na_storoni(Point P) const {
    if (Tochka_lechut(A, B, P) || Tochka_lechut(B, C, P) || Tochka_lechut(C, A, P)) {
        return 2; 
    }

    Triangle t1 = { A, B, P };
    Triangle t2 = { B, C, P };
    Triangle t3 = { C, A, P };

    double totalArea = area();
    double suma_pid_ploshch = t1.area() + t2.area() + t3.area();

    if (fabs(totalArea - suma_pid_ploshch) < 1e-7) {
        return 1;
    }

    return 0; 
}