#pragma once
class Derivative
{
private:
	const double h = 0.0001;
public:
	double getDerivative1(double(&Function)(double, double), double x1, double x2, int i);
	double getDerivative2(double(&Function)(double, double), double x1, double x2, int i);
	Derivative();
	~Derivative();
};

