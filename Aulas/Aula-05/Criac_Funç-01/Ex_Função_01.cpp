#include <iostream>
#include <windows.h>
using namespace std;

void flexao(int);   // protótipo da função

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	flexao(3);    // chamada da função
	cout << "Escolha um número inteiro: ";
	int cont;
	cin >> cont;

	flexao(cont);     // chama a função 'flexao' novamente

	return 0;
}

void flexao(int n)
{
	cout << "Faça " << n << " flexões." << endl;
}