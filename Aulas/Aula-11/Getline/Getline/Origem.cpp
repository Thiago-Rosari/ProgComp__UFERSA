#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Em que ano sua casa foi construída? " << endl;
	int ano;
	cin >> ano;
	cin.ignore();  // elimina um ou mais caracteres do cin
	//cin.get();  // caractere '\n' lido e descartado

	cout << "Qual é o seu endereço? " << endl;
	char endereço[80];
	cin.getline(endereço, 80);

	cout << "Ano de construção: " << ano << endl;
	cout << "Endereço: " << endereço << endl;
	cout << "Pronto" << endl;

	return 0;
}