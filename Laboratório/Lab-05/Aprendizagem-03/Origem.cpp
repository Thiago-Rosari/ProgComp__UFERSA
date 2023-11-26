// exercício de aprendizagem 03
#include <iostream>
#include <windows.h>
#include "indice.h"
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float alt, mass, imc;

	cout << "Índice de Massa Corporal (IMC)" << endl;
	cout << "------------------------" << endl;

	cout << "Altura: ";
	cin >> alt;
	cout << "Massa: ";
	cin >> mass;

	imc = IMC(alt, mass);

	cout << "IMC: " << imc << endl;

	return 0;
}