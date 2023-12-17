// exercício de aprendizagem 01
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char senha[15] = "progcomp";
	char Rsenha[15];


	cout << "Digite a senha: ";
	cin >> Rsenha;

	if (strcmp(senha, Rsenha) == 0)
	{
		cout << "Senha correta." << endl;
	}
	else
	{
		cout << "Senha incorreta." << endl;
	}

	return 0;
}