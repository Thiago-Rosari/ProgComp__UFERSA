// exercício de aprendizagem 02
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

	int resposta;
	cout << "Para codificar a letra, digite 1, ou 0 para decodificar." << endl;
	cin >> resposta;

	if (resposta == true)
	{
		cout << "A letra codificada agora é " << codificar(letra) << endl;
	}
	else
	{
		cout << "A letra decodificada agora é " << decodificar(letra);
	}
	

	return 0;
}