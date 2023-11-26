// exercício de aprendizagem 5
#include <iostream>
#include <windows.h>
#include "vetor.h"
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double x, y;

	cout << "Digite as coordenadas do vetor: " << endl;
	cout << " x: ";
	cin >> x;
	cout << " y: ";
	cin >> y;

	vetor(x, y);

	cout << "O ângulo do vetor é " << vetor(x, y) << endl;

	return 0;
}