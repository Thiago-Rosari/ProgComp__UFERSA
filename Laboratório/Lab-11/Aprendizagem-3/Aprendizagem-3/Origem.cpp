// exercício de aprendizagem 03
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	const int TamVet = 20;
	char nome[TamVet];
	char data[TamVet];

	cout << "Nome: ";
	cin.getline(nome, TamVet);
	cout << "Data: ";
	cin.getline(data, TamVet);

	cout << nome << " esteve aqui em " << data << endl;
 
	return 0;
}