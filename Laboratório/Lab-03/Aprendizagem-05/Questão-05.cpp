// exercício de aprendizagem 5
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);


	int horas, minutos, novaH;
	char ponto = ':';

	cout << "Que horas são? " << endl;
	cin >> horas;
	cin >> minutos;
	novaH = horas + 1;

	cout << "O seu relógio está atrasado." << endl;
	cout << "Agora são " << novaH << ponto << minutos << endl;



	system("pause");
	return 0;
}