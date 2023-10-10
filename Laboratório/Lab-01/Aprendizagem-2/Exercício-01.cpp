// Exercícios de Aprendizagem - questão 1
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float n1, n2, n3, n4, media;
	cout << "Calculando a média" << endl;
	cout << "------------------" << endl;
	cout << endl;

	cout << "Nota 1: ";
	cin >> n1;

	cout << "Nota 2: ";
	cin >> n2;

	cout << "Nota 3: ";
	cin >> n3;
	cout << endl;

	media = (n1 + n2 + n3) / 3;


	if (media < 70.0) {
		cout << "Por favor, adicione a nota de recuperação:" << endl;
		cout << "__________________________________________" << endl;
		cout << "Nota 4: ";
		cin >> n4;

		media = media + n4 / 3;
	}


	cout << "A média das notas: " << media;
	cout << endl;

	return 0;
}