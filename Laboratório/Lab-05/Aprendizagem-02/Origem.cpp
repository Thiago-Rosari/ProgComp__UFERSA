// exercício de aprendizagem 02
#include <iostream>
#include <windows.h>
#include "salario.h"
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Salário atual do funcionário: R$";
	float sal_atual;
	cin >> sal_atual;

	float res = almento(sal_atual);

	cout << "Salário ajustado para R$" << res << endl;

	return 0;
}