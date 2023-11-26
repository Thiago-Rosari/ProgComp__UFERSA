#include <iostream>
#include <cmath>
using namespace std;

double radiano(double n1, double n2)
{
	double valor = atan2(n2, n1) * 180 / 3.141592;

	return valor;
}