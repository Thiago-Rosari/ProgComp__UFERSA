// exemplo do uso de funções
#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Digite a área da sua casa em metros quadrados: ";
	double area;
	cin >> area;

	double lado;
	lado = sqrt(area);  // chamada da função sqrt]

	cout << "Isso é equivalente a um quadrado com " << lado << " metros de lado." << endl;



	return 0;
}