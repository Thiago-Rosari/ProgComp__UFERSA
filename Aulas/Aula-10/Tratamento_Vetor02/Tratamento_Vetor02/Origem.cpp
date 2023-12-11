#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int vet[3];  //cria vetor de 3 elementos

	cout << "Conteúdo da posição 0: " << vet[0] << endl;
	cout << "Conteúfo da posição 1: " << vet[1] << endl;
	cout << "Conteúdo da posição 2: " << vet[2] << endl << endl;

	vet[0] = 0;
	vet[1] = 0;
	vet[2] = 0;

	cout << "Conteúdo da posição 0: " << vet[0] << endl;
	cout << "Conteúfo da posição 1: " << vet[1] << endl;
	cout << "Conteúdo da posição 2: " << vet[2] << endl << endl;

	cout << "O vetor tem " << sizeof vet << " bytes" << endl;
	cout << "Um elemento tem " << sizeof vet[0] << " bytes" << endl;

	return 0;
}