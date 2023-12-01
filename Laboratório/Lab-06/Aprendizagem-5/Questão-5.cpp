// exercício de aprendizagem 5
#include <iostream>
#include <windows.h>
#include "isInt.h"
#include "isShort.h"

using namespace std;

int main() 
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Informe um número para verificar em quantos bits ele cabe: ";
	long long num;
	cin >> num;
	isShort(num);
	isInt(num);


	return 0;
}