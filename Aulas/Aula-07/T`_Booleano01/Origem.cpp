// o tipo booleano
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	bool buzinar = false;  // buzina desligada

	cout << "Buzinar? ";
	cin >> buzinar;  // leitura de um booleano

	if (buzinar == true)
		cout << "Buzina\a\a\a\a\a";
	else
		cout << "Silêncio" << endl;

	return 0;
}