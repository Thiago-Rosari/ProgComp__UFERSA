// exercício de aprendizagem 01
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Digite um número: ";
	char num1[3];
	cin >> num1;

	cout << "Digite outro número: ";
	int num2;
	cin >> num2;

	int N = atoi(num1); // conveter string para um inteiro

	int res = N * num2;
	cout << "O resultado da multiplicação dos números " << num1 << " e " << num2 << " é igual a " << res << endl;

	return 0;
}