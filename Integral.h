#pragma once
#include <stdio.h>
#include <math.h>
class Integral
{
private:
	int _N;
	double _a;
	double _b;
	double _step;
	void setStep();
	void setStep(int N, double a, double b);
public:
	double Rectangle(double(&Function)(double));
	double Rectangle(double(&Function)(double), int N, double a, double b);
	
	double Rectangle(double(&Function1)(double), double(&Function2)(double));
	double Rectangle(double(&Function1)(double), double(&Function2)(double), int N, double a, double b);

	Integral();
	Integral(int N, double a, double b);
	~Integral();
};

