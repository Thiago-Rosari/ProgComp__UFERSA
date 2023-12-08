// operador módulo
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	// constantes devem ser inicializadas e não podem ter ser valor alterado no programa.
	const int CentavosPorReal = 100;
	int valor;

	cout << "Digite um valor em centavos: ";
	cin >> valor;

	int reais = valor / CentavosPorReal;
	int centavos = valor % CentavosPorReal;

	cout << valor << " centavos correspondem a " << endl << reais << " Reais e " << centavos << " centavos." << endl;

	return 0;
}