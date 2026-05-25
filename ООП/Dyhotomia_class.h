#pragma once

#ifndef DYHOTOMIA_H
#define DYHOTOMIA_H

class Dyhotomia_class {
public:
	Dyhotomia_class(void);
	~Dyhotomia_class(void);
	void SetVolumes(double vol_a, double vol_b);
	void SetTolerance(double vol_eps);
	double MetodDychotomia(); 
	double MetodNewton(); 
	double f_perevirka(double x);
private:
	double a;
	double b;
	double eps;
	double f(double x);
	double f_shtrih(double x);
	
};
#endif