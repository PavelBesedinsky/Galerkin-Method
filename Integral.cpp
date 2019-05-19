#include "Integral.h"



void Integral::setStep()
{
	_step = (_b - _a) / _N;
}

void Integral::setStep(int N, double a, double b)
{
	_step = (_b - _a) / _N;
}

double Integral::Rectangle(double(&Function)(double))
{
	double Sum = 0;
	double X = _a + 0.5 * _step;
	for (double i = 0; i < _N; i++)
	{
		Sum += Function(X);
		X += _step;
	}
	return Sum * _step;
}

double Integral::Rectangle(double(&Function)(double), int N, double a, double b)
{
	setStep(N, a, b);
	double Sum = 0;
	double X = _a + 0.5 * _step;
	for (double i = 0; i < _N; i++)
	{
		Sum += Function(X);
		X += _step;
	}
	return Sum * _step;
}


Integral::Integral()
{
}

Integral::Integral(int N, double a, double b)
{
	_N = N;
	_a = a;
	_b = b;
	setStep();
}


Integral::~Integral()
{
}
