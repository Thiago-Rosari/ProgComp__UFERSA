// exercício de aprendizagem 7
#include <iostream>
#include <windows.h>
#include "quadrado.h"
#include "cubo.h"
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Digite um valor: ";

	float num;
	cin >> num;

	float quad = quadrado(num);
	float cub = cubo(num);

	cout << endl;
	cout << "Quadrado: " << quad << endl;
	cout << "Cubo: " << cub << endl;
	cout << "Cubo do quadrado: " << quadrado(cub);
	cout << endl;



	return 0;
}