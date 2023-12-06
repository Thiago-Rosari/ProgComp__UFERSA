// exercício de fixação 03
#include <iostream>
#include <windows.h>
using namespace std;

float AnoSeg(int);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Digite sua idade em anos: ";
	int idade;
	cin >> idade;

	cout << idade << " anos correspondem a " << AnoSeg(idade) << " segundos." << endl;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(1);

	cout << idade << " anos correspondem a " << AnoSeg(idade) << " segundos." << endl;

	return 0;
}

//------------------------------------------------------------------------------------------

float AnoSeg(int idade)
{
	return idade * 3.156e7;
}