// exercício de aprendizagem 5
#include <iostream>
#include <windows.h>
using namespace std;


void Absoluto(void);

int num;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Digite um número inteiro: ";
	cin >> num;

	Absoluto();

	return 0;
}



void Absoluto(void)
{
	int abs = num * -1;

	cout << "O valor absoluto é " << abs << endl;
}