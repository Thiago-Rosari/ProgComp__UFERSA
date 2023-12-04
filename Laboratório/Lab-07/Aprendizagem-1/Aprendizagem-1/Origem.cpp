#include <iostream>
#include <windows.h>
#include "codificar.h"
#include "decodificar.h"
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char letra;

	cout << "Digite uma letra: ";
	cin >> letra;

	cout << "Adicionando 3, a nova letra é " << codificar(letra) << endl;
	cout << "Subtraindo 3, a letra agora é " << decodificar(letra) << endl;

	return 0;
}