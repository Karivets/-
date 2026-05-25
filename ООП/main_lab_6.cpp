#include <iostream>
#include"windows.h"

using namespace std;

double f(double x) {
	return cos(2.0 / x) - 2.0 * sin(1.0 / x) + (1.0 / x);
}

/*
int main() {
	SetConsoleOutputCP(1251);
	
	double x, d, x1, x2, a, b, c;
	cout << "Введіть квадратне рівняння(значення a b c)" << endl;
	cin >> a >> b >> c;
	auto lambda = [=](auto a, auto b, auto c) mutable {
		d = pow(b, 2) - (4 * a * c);
		if (d < 0) {
			return 1.0;
		}
		else {
			x1 = (-b - sqrt(d)) / (2 * a);
			cout << "Корення: " << x1 << " ";
			x2 = (-b + sqrt(d)) / (2 * a);
			return x2;
		}
		};
	if (lambda(a, b, c) == 1.0) {
		cout << "Дискримінант від'ємний (рівняння немає розв'язків)" << endl;
	}
	else
		cout << lambda(a, b, c) << endl;
	return 0;
}
*/

	/*
	double eps = 0.00001;
	double a, b;
	cout << "Введіть межі (a b)" << endl;
	cin >> a >> b;
	auto lambda = [=](auto a, auto b) mutable->double {
		if (f(a) * f(b) > 0) {
			cout << "Метод дихотомії: коренів на проміжку немає." << endl;
			return NAN;
		}

		while (fabs(b - a) > eps) {
			double c = (a + b) / 2.0;
			if (f(a) * f(c) < 0) b = c;
			else a = c;
		}
		return (a + b) / 2.0;
		};
	cout << lambda(a, b) << endl;
	return 0;
}
*/