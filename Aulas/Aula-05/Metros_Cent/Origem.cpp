#include <iostream>
#include <windows.h>
#include "Converte.h"
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Entre com a distância em metros: ";
	float num;
	cin >> num;

	float cent = converte(num);  // inicializando com uma função

	cout << num << " metros = " << cent << " centímetros." << endl;

	return 0;
}