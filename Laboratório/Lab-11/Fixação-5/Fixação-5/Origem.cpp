// exercício de fixação 05
#include <iostream>
#include <windows.h>
using namespace std;

char ultimo(char texto[]);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Digite uma palavra: ";
	char palavra[20];
	cin >> palavra;

	cout << endl;
	cout << "Em " << palavra << " a última letra é " << ultimo(palavra) << "." << endl;


	return 0;
}


char ultimo(char texto[])
{
	// posição da última letra
	int pos = strlen(texto) - 1;

	return texto[pos];
}