// exercício de aprendizagem 03
#include <iostream>
#include <windows.h>
#include "bitsbaixo.h"
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Digite um valor inteiro: ";
	unsigned int valor;
	cin >> valor;
	cout << "Os 16 bits mais baixos desse valor correspondem ao numero " << bitsBaixos(valor) << endl;

	return 0;
}