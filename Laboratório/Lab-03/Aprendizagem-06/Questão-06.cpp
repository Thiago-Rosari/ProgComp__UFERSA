// exercício de aprendizagem 6
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);


	int a, b, base, altura, volume;

	cout << "Por favor, insira os valores do prisma retangular: " << endl;
	cout << "Lado a: ";
	cin >> a;
	cout << "Lado b: ";
	cin >> b;

	base = a * b;
	cout << "Área da base = " << base << endl;

	cout << "Qual a altura do prisma: ";
	cin >> altura;

	volume = altura * base;
	cout << "Volume do prisma = " << volume << endl;




	system("pause");
	return 0;
}