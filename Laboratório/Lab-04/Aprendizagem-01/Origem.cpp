#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int P1, P2, Q1, Q2;


	cout << "Entre com dois valores para P e Q " << endl;
	cout << "para calcular a distância entre eles." << endl;
	cout << "Valores de P: " << endl;
	cin >> P1;
	cin >> P2;
	cout << "Valores de Q: " << endl;
	cin >> Q1;
	cin >> Q2;

	int pt1 = Q1 - P1;
	int pt2 = Q2 - P2;

	double potencia1 = pow(pt1, 2);
	double potencia2 = pow(pt2, 2);

	double total = potencia1 + potencia2;
	double area;

	area = sqrt(total);

	cout << "A distância entre P e Q é: " << area << endl;


	return 0;

}