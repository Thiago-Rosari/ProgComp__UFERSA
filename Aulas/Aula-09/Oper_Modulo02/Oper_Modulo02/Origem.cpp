// operador módulo
#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Entre com os valores min e max: " << endl;
	int min, max;
	cin >> min;
	cin >> max;

	cout << "Sorteando um valor nesta faixa: " << endl;
	int sorteio = min + rand() % (max - min + 1);
	cout << sorteio << endl;

	return 0;
}