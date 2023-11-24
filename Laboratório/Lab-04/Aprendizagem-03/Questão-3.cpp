// exercício de aprendizagem 3
#include <iostream>
#include <windows.h>
using namespace std;

void media(void);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	media();


	return 0;
}


void media(void)
{
	double valor1, valor2, res;

	cout << "Digite um valor inteiro: ";
	cin >> valor1;
	cout << "Digite outro valor inteiro: ";
	cin >> valor2;

	res = (valor1 + valor2) / 2;
	cout << "A média dos valores é " << res << endl;
}