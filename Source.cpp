#include <stdio.h>
#include <math.h>
#include "Derivative.h"
#include "Integral.h"
#include <windows.h>
#include "Funcs2.h"

int main(int argc, char **argv)
{
	typedef double(*arrayFunctions)(double x);
	arrayFunctions A[4][4];
	A[0][0] = L11;
	A[0][1] = L12;
	A[0][2] = L13;
	A[0][3] = L14;

	A[1][0] = L21;
	A[1][1] = L22;
	A[1][2] = L23;
	A[1][3] = L24;

	A[2][0] = L31;
	A[2][1] = L32;
	A[2][2] = L33;
	A[2][3] = L34;

	A[3][0] = L41;
	A[3][1] = L42;
	A[3][2] = L43;
	A[3][3] = L44;

	Derivative* exp = new Derivative();
	Integral* integ = new Integral();
	double result = integ->Rectangle(*A[0][3], 1000, 1.0, 2.0);
	printf("Result = %f\n", result);
	system("pause");
	delete exp;
	delete integ;
	return 0;
}