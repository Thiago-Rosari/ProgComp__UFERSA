// exercício de fixação 01
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	const int NomeSobre = 12;

	char nome[NomeSobre];
	char sobrenome[NomeSobre];

	cout << "Primeiro nome? ";
	cin >> nome;
	cout << "Segundo nome? ";
	cin >> sobrenome;

	cout << "Bom dia, " << nome << " " << sobrenome << "." << endl;
	cout << "Seja bem vindo " << nome[0] << sobrenome[0] << "!" << endl;

	return 0;
}