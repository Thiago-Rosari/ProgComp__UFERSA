// const-var.cpp - exemplifica o uso de constantes
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "A letra " << 'm';
	cout << " tem " << 3 << " pernas." << endl;

	char ch = 'M';      // tipo caractere
	int num = 0x1E;     // tipo inteiro

	cout << "Dez letras " << ch;
	cout << " tem " << num << " pernas." << endl;

	return 0;
}