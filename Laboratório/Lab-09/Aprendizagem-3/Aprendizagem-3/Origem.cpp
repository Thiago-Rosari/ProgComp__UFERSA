// exercício de aprendizagem 03
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float real;
	cout << "Digite um número real: ";
	cin >> real;

	int inteiro = real;
	cout << "A aprte inteira: " << inteiro << endl;

	float fracio = real - inteiro;
	cout << "A parte fracionária: " << fracio << endl;

	return 0;
}