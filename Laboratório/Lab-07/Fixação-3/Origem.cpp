// exercício de fixação 03
#include <iostream>
#include <windows.h>
#include "charada.h"
using namespace std;


int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << charada('<', 20);
	cout << charada('\a', 90);
	cout << charada('(', 72);
	cout << charada('5', 48);
	cout << charada('\1', 107);

	cout << endl;

	return 0;
}