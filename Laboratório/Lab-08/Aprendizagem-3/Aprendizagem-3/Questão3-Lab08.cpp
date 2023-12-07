// exercício de aprendizagem 03
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float a = (10.0/3.0);
	cout << "a = " << a << endl;
	float b = (6.1);
	cout << "b = " << b << endl;
	float c = (1.0/3.0);
	cout << "c = " << c << endl;
	float d = (7.0/3.0);
	cout << "d = " << d << endl;
	float e = (9.2);
	cout << "e = " << e << endl;

	cout << fixed;
	cout.precision(8);

	cout << "8 casa depois da vírugla :\n";
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	cout << "e = " << e << endl;
	
}