// exercícios de aprendizagem 2

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int n;
	cout << "Tabuada de n" << endl;
	cout << "------------" << endl;
	cout << "Entre com um número n (0 a 9) " << endl;
	cin >> n;
	cout << endl;

	for (int a = 1; a <= 9; a++)
	{
		cout << n << " x " << a << " = " << a * n << endl;
	}

	return 0;
}