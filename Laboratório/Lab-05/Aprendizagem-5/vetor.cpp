#include <iostream>
#include <cmath>
double vetor(double n1, double n2)
{
	double valor = atan2(n2, n1) * 180 / 3.1415;

	return valor;
}