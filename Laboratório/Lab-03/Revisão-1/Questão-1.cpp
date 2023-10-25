// exercício de fixação 1
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float altura;
	float largura;
	float comprimento;

	cout << "Digita a altura, largura e comprimento: " << endl;
	cin >> altura >> largura >> comprimento;

	float volume = altura * largura * comprimento;
	cout << "O volume é igual a " << volume << endl;

	return 0;
}