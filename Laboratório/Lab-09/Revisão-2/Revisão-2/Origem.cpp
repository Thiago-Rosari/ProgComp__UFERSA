// exeercício de fixação 02
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Digite um ponto-flutuante: ";
	double num;
	cin >> num;

	cout << "Notacao padrão: " << num << endl;

	// cout.setf(ios_base::scientific, ios_base::floatfield);
	cout << scientific;
	cout << "Notacao científica: " << num << endl;

	// cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << fixed;
	// duas casas decimais após a vírgula
	cout.precision(2);
	cout << "Notacao decimal: " << num << endl;

	return 0;
}