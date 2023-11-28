// exercício de fixação 02
#include <iostream>
#include <windows.h>
#include "Consumo.h"

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float dist, litros;

	cout << "Distância percorrida (Km): ";
	cin >>dist;
	cout << "Litros de combustível: ";
	cin >> litros;

	DisLitro(dist, litros);

	cout << "O consumo do seu carro foi de " << DisLitro(dist, litros) << "Km/litro." << endl;

	return 0;
}