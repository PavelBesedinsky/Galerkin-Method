#include <stdio.h>
#include <math.h>
#include "Derivative.h"
#include "Integral.h"
#include "Funcs.h"
#include <windows.h>

double L0(double x)
{
	return U0(x) * LU0(x);
}
double L1(double x)
{
	return U1(x) * LU1(x);
}
double L2(double x)
{
	return U2(x) * LU2(x);
}
double L3(double x)
{
	return U2(x) * LU2(x);
}
double L4(double x)
{
	return U2(x) * LU2(x);
}
double Lf(double x)
{
	return fLU(x);
}

int main(int argc, char **argv)
{
	typedef double(*arrayFunctions)(double x);
	arrayFunctions arrF[5][5];
	arrF[0][0] = L0;
	arrF[0][1] = L1;

	Derivative* exp = new Derivative();
	Integral* integ = new Integral();
	double result = integ->Rectangle(*arrF[0][1], 1000, 1.0, 2.0);
	printf("Result = %f\n", result);
	system("pause");
	delete exp;
	delete integ;
	return 0;
}