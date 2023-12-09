// exercício de revisão 01
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	long a = 2009032809;
	float b = a;
	double c = a;

	cout << "valor long: " << a << endl;
	cout << endl;

	cout << "Mostrando em formato científico:" << endl;
	cout << "valor float: " << b << endl;
	cout << "valor double: " << c << endl;
	cout << endl;

	cout << "Mostrando no formato decimal:" << endl;
	cout << fixed;
	cout.precision(0);

	cout << "valor float: " << b << endl;
	cout << "valor double: " << c << endl;

	return 0;
}