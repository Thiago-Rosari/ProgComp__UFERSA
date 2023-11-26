// exercício de aprendizagem 06
#include <iostream>
#include <windows.h>
#include "tangente.h"
#include "vetor.h"
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double x, y;

	cout << "Digite as coordenadas do vetor: " << endl;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;

	vetor(x, y);
	radiano(x, y);

	cout << "Coordenadas polaresdo vetor: " << endl;
	cout << "(" << vetor(x, y) << ", " << radiano(x, y) << ")" << endl;


	return 0;
}