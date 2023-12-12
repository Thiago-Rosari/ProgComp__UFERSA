// exercício de aprendizagem 01
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int posI[5] = {3, 40, 16, 90, 25};
	cout << "Vetor: " << posI[0] << " " << posI[1] << " " << posI[2] << " " << posI[3] << " " << posI[4] << endl;
	cout << "--------------------" << endl;

	int posicao, novoValor;
	cout << "Alterar posição: ";
	cin >> posicao;
	cout << "Novo Valor: ";
	cin >> novoValor;

	cout << "--------------------" << endl;

	posI[posicao] = novoValor;
	cout << "Vetor: " << posI[0] << " " << posI[1] << " " << posI[2] << " " << posI[3] << " " << posI[4] << endl;


	return 0;
}