// exercício de aprendizagem 05
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double valor = 245.795;

	int inteiro = int(valor);

	int multi1 = valor * 100;
	int multi2 = inteiro * 100;

	cout << "valor 1 " << multi1 << endl;
	cout << "Valor 2 " << multi2 << endl;


	return 0;
}