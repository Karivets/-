#include "Dyhotomia_class.h"
#include "cmath"
#include "iostream"

using namespace std;
Dyhotomia_class::Dyhotomia_class(){}
Dyhotomia_class::~Dyhotomia_class() {}

void Dyhotomia_class::SetVolumes(double vol_a, double vol_b) {
	 a = vol_a;
	 b = vol_b;
	
}

void Dyhotomia_class::SetTolerance(double vol_eps) {
	eps = vol_eps;
}

double Dyhotomia_class:: f(double x) {
	return cos(2.0 / x) - 2.0 * sin(1.0 / x) + (1.0 / x);
}

double Dyhotomia_class:: f_shtrih(double x) {
		double dx = 1e-7; 
		return (f(x + dx) - f(x)) / dx;
}
double Dyhotomia_class::MetodDychotomia() {
    double temp_a = a, temp_b = b;
    if (f(temp_a) * f(temp_b) > 0) {
        cout << "Метод дихотомії: коренів на проміжку немає." << std::endl;
        return NAN;
    }

    while (fabs(temp_b - temp_a) > eps) {
        double c = (temp_a + temp_b) / 2.0; 
        if (f(temp_a) * f(c) < 0) temp_b = c; 
        else temp_a = c; 
    }
    return (temp_a + temp_b) / 2.0;
}

double Dyhotomia_class::MetodNewton() {
    double x_n = (a + b) / 2.0; 
    double x_next;

    for (int i = 0; i < 1000; i++) {
        double df = f_shtrih(x_n);
        if (fabs(df) < 1e-12) break; 

        x_next = x_n - f(x_n) / df;

        if (fabs(x_next - x_n) < eps) return x_next;
        x_n = x_next;
    }
    return x_n;
}
double Dyhotomia_class:: f_perevirka(double x) {
    return cos(2.0 / x) - 2.0 * sin(1.0 / x) + (1.0 / x);
}