// exercício de aprendizagem 02
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int num1, num2;

	cout << "Digite dois números inteiros: " << endl;
	cin >> num1;
	cin >> num2;

	int divs = num1 / num2;
	cout << "O quociente " << num1 << "/" << num2 << " é " << divs << endl;

	int modl = num1 % num2;
	cout << "O resto da divisão " << num1 << "%" << num2 << " é " << modl << endl;

	return 0;
}