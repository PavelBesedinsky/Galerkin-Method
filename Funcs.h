#pragma once
#include "Derivative.h"
#include "Integral.h"
double U0(double x)
{
	return 2.6137;
}

double U1(double x)
{
	return x * x - 2 * x;
}

double U2(double x)
{
	return x * x * x - 3 * x - 2;
}

double U3(double x)
{
	return x * x * x * x - 4 * x - 8;
}

double U4(double x)
{
	return x * x * x * x * x - 5 * x - 22;
}

double LU0(double x)
{
	Derivative* der = new Derivative();
	double res = der->getDerivative2(U0, x) + 1 / x * der->getDerivative1(U0, x) + 0.5 * U0(x);
	delete der;
	return res;
	//return 1.3069;
}
double LU1(double x)
{
	Derivative* der = new Derivative();
	double res = der->getDerivative2(U1, x) + 1 / x * der->getDerivative1(U1, x) + 0.5 * U1(x);
	delete der;
	return res;
	//return 0.5 * x * x - x + 4 - 2 / x;
}
double LU2(double x)
{
	Derivative* der = new Derivative();
	double res = der->getDerivative2(U2, x) + 1 / x * der->getDerivative1(U2, x) + 0.5 * U2(x);
	delete der;
	return res;
	//return 0.5 * x * x * x + 0.75 * x - 1 - 3 / x;
}
double LU3(double x)
{
	Derivative* der = new Derivative();
	double res = der->getDerivative2(U3, x) + 1 / x * der->getDerivative1(U3, x) + 0.5 * U3(x);
	delete der;
	return res;
	//return 0.5 * x * x * x * x + 16 * x * x - 2 * x - 4 - 4 / x;
}
double LU4(double x)
{
	Derivative* der = new Derivative();
	double res = der->getDerivative2(U4, x) + 1 / x * der->getDerivative1(U4, x) + 0.5 * U4(x);
	delete der;
	return res;
	//return 0.5 * x * x * x * x * x + 25 * x * x * x - 2.5 * x - 11 - 5 / x;
}
double fLU(double x)
{
	return 0.5 * x * x - log(x) + 2.6931;
}