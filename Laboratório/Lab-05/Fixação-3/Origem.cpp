// exercício de fixação 03
#include <iostream>
#include <windows.h>
#include "harmonia.h"
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float x, y;

	cout << "Que tal encontrar a média harmônica dos números?" << endl;
	cout << "Vamos começar..." << endl;
	cout << endl;

	cout << "Entre com um número: ";
	cin >> x;
	cout << "Entre com outro números: ";
	cin >> y;
	cout << endl;

	float res = harmonic(x, y);

	cout << "A média harmônica dos números é " << res << endl;


	return 0;
}