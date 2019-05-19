#pragma once
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
	double Rectangle(double(&Function)(double), double x);
	double Rectangle(double(&Function)(double), double x, int N, double a, double b);
	
	Integral(int N, double a, double b);
	~Integral();
};

