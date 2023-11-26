#include <iostream>
#include <windows.h>
#include "Fahren.h"
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Digite uma temperatura em graus Celsius: ";
	float GrauC;
	cin >> GrauC;

	float res = grausF(GrauC);

	cout << GrauC << " graus Celsius equivalem a " << res << " graus Fahrenheit." << endl;

	return 0;
}