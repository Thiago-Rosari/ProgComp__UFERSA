// Exercício de aprendizagem - questão 3
#include <iostream>
#include <windows.h>
using namespace std;
int main()

{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int a, b, c = 0;
	a = 1;
	b = 2;
	a = c;
	b = a;
	cout << b << endl;

	return 0;
}