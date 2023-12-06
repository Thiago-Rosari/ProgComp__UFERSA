// exercício de fixação 02
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);


	cout << "Digite um número real: ";
	float num;
	cin >> num;

	cout << "Notação padrão: " << num << endl;

	cout.setf(ios_base::scientific, ios_base::floatfield);
	cout << "Notação científica: " << num << endl;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Notação decimal: " << num << endl;



	return 0;
}