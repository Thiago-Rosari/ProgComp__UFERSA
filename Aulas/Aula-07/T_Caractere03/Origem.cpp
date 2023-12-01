// caracteres especiais
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char alarme = '\a';  //caractere beep
	int senha;

	cout << "Digite a senha: __________\b\b\b\b\b\b\b\b\b\b";
	cin >> senha;

	cout << alarme << "Sua senha foi roubada!\a\n";
	cout << "Joãozinho \"O Hacker\"\n esteve aqui!\n";

	return 0;
}