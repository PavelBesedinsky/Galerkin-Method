#pragma once
#include "Funcs.h"
double L11(double x)
{
	return U1(x) * LU1(x);
}
double L12(double x)
{
	return U1(x) * LU2(x);
}
double L13(double x)
{
	return U1(x) * LU3(x);
}
double L14(double x)
{
	return U1(x) * LU4(x);
}

double L21(double x)
{
	return U2(x) * LU1(x);
}
double L22(double x)
{
	return U2(x) * LU2(x);
}
double L23(double x)
{
	return U2(x) * LU3(x);
}
double L24(double x)
{
	return U2(x) * LU4(x);
}

double L31(double x)
{
	return U3(x) * LU1(x);
}
double L32(double x)
{
	return U3(x) * LU2(x);
}
double L33(double x)
{
	return U3(x) * LU3(x);
}
double L34(double x)
{
	return U3(x) * LU4(x);
}

double L41(double x)
{
	return U4(x) * LU1(x);
}
double L42(double x)
{
	return U4(x) * LU2(x);
}
double L43(double x)
{
	return U4(x) * LU3(x);
}
double L44(double x)
{
	return U4(x) * LU4(x);
}

double Lf(double x)
{
	return fLU(x);
}