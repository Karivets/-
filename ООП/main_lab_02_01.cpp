#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;
/*
int perevirka(Point A, Point B, Point C) {
	if (distance(A, B) == distance(A, C) + distance(A, C))
		cout << "точка на трикутнику";
	else cout << "точка за межами";

}
struct Point {
	double x, y;
};

double distance(const Point& p1, const Point& p2) {
	return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
struct Triangle {
	Point A, B, C;
	double area() const;
	bool contains(const Point& P) const {
		Triangle T1 = { A,B,P };
		Triangle T2 = { B,C,P };
		Triangle T3 = { C,A,P };
		double S_main = area();
		double S_sum = T1.area()+ T2.area()+ T3.area();
		return fabs(S_main - S_sum) < 1e-9;
	}
};

double heronArea(const Triangle& t) {
	double a = distance(t.A, t.B);
	double b = distance(t.B, t.C);
	double c = distance(t.C, t.A);
	double s = (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}

double Triangle::area() const {
	return heronArea(*this);
}

int main() {
	SetConsoleOutputCP(1251);
	
	Triangle t = { {0,0},{5,0},{2,5} };
	Point p = { 0,0 };
	cout << "ѕлоща трикутника за формулою герона = ";
	cout << heronArea(t) << endl;
	if (t.contains(p)) 
		cout << "“очка належить трикутника" << endl;
	else 
		cout<< "“очка не належить трикутника" << endl;
	return 0;
}
*/