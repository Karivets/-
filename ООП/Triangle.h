#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

struct Point {
    double x, y;
};

struct Triangle {
    Point A, B, C;

    bool Perevirka_ploshchi() const;

    int Perevirka_chu_na_storoni(Point P) const;

    double area() const;
};

double Vidstan(Point p1, Point p2);

#endif