// o tipo caractere e o tipo inteiro
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char ch = 'M';  // atribui código ASCII do M
	int i = ch;     // armazena mesmo código num int

	cout << "O código ASCII para " << ch << ": " << i << endl;

	cout << "Adicionando 1 ao código caractere..." << endl;
	ch = ch + 1;
	i = ch;

	cout << "O código ASCII para " << ch << ": " << i << endl;

	return 0;
}