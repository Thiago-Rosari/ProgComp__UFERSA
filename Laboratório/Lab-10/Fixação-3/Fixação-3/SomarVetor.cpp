// ecercício de fixação 03
#include <iostream>
#include <windows.h>
using namespace std;

int SomarVetor(int []);

int main()
{
	SetConsoleCP(152);
	SetConsoleOutputCP(1252);

	int valor[5];
	cout << "Digite 5 valores: ";
	cin >> valor[0];
	cin >> valor[1];
	cin >> valor[2];
	cin >> valor[3];
	cin >> valor[4];

	cout << "A soma do vetor é " << SomarVetor(valor) << endl;

	return 0;
}

int SomarVetor(int vet[])
{
	return vet[0] + vet[1] + vet[2] + vet[3] + vet[4];
}