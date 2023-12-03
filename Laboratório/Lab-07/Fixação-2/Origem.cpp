// exercício de fixação 2
#include <iostream>
#include <windows.h>
#include "alerta.h"
#include "Senha.h"
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Iniciando com som..." << endl;
	alerta();

	cout << "Digite sua senha:________\b\b\b\b\b\b\b\b";
	int senha = LerSenha();

	cout << "Obrigado!" << endl;

	return 0;
}