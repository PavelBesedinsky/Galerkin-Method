#include "Derivative.h"

double Derivative::getDerivative1(double(&Function)(double), double x)
{
	return (Function(x + h) - Function(x)) / h;
}

double Derivative::getDerivative2(double(&Function)(double), double x)
{
	return (Function(x + h) - 2 * Function(x) + Function(x - h)) / (h * h);
}

double Derivative::getDerivative1(double(&Function)(double, double), double x1, double x2, int i)
{
	switch (i)
	{
	case 0:
		return (Function(x1 + h, x2) - Function(x1, x2)) / h;
		//return (Function(x1 + h, x2) - Function(x1 - h, x2)) / (h * h);
	case 1:
		return (Function(x1, x2 + h) - Function(x1, x2)) / h;
		//return (Function(x1, x2 + h) - Function(x1, x2 - h)) / (h * h);
	}
}

double Derivative::getDerivative2(double(&Function)(double, double), double x1, double x2, int i)
{
	switch (i)
	{
	case 0:
		return (Function(x1 + h, x2) - 2 * Function(x1, x2) + Function(x1 - h, x2)) / (h * h);
	case 1:
		return (Function(x1, x2 + h) - 2 * Function(x1, x2) + Function(x1, x2 - h)) / (h * h);
	}
}

Derivative::Derivative()
{

}


Derivative::~Derivative()
{
}
