// operadores aritméticos
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float num1, num2;

	cout << "Entre com um número: ";
	cin >> num1;
	cout << "Entre com outro número: ";
	cin >> num2;

	cout << "num1 = " << num1 << "; num2 = " << num2 << endl;
	cout << "num1 + num2 = " << num1 + num2 << endl;
	cout << "num1 - num2 = " << num1 - num2 << endl;
	cout << "num1 * num2 = " << num1 * num2 << endl;
	cout << "num1 / num2 = " << num1 / num2 << endl;

	return 0;
}