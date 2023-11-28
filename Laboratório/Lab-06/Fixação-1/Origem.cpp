// exercício de fixação 01
#include <iostream>
#include <windows.h>
using namespace std;



int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int total;
	total = 0;

	cout << "Iniciando total = " << total << " (ZERO)" << endl;
	total = 50;
	cout << "Depois da atribuição total = " << total << endl;

	return 0;
}