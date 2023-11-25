// exercício de fixação 01
#include <iostream>
#include <windows.h>
using namespace std;

void horario(int, int);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Entre com o número de horas: ";
	int hora;
	cin >> hora;

	cout << "entre com o número de minútos: ";
	int min;
	cin >> min;

	cout << "Agora são ";
	horario(hora, min);
	cout << endl;

	return 0;
}

//-------------------------------------------------------------

void horario(int hh, int mm)
{
	cout << hh << ":" << mm;
}