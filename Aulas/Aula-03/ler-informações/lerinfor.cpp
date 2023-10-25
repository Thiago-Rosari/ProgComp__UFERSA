// lerinfor.cpp - entrada e saída de dados
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int cenouras;

	cout << "Quantas cenouras você tem?" << endl;
	cin >> cenouras;    // entrada de dados

	cout << "Aqui estão mais duas. ";
	cenouras = cenouras + 2;

	// concatena a saída
	cout << "Agora você tem " << cenouras << " cenouras." << endl;

	return 0;
}