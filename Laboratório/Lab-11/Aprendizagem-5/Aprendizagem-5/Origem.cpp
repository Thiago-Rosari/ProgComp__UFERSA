// exercício de aprendizagem 05
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char nome[15];
	char sobrenome[15];

	cout << "Digite seu nome e sobrenome ";
	cin >> nome >> sobrenome;
	cout << "Bom dia senhor, " << sobrenome << ". " << "Ou devo te chamar de " << nome << "? " << endl;

	return 0;
}