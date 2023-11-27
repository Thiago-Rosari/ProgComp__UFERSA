// converter horas em segundos
#include <iostream>
using namespace std;

#define SegPorHora 3600

int main()
{
	cout << "Digite uma quantidade de tempo em horas: ";
	int horas;
	cin >> horas;

	int segundos = horas * SegPorHora;
	cout << "Isso equivale a " << segundos << " segundos." << endl;

	return 0;
}