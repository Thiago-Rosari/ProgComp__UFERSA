// exercício de aprendizagem 4
#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

void VolumeCilindro(void);

float raio, alt;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Calcula o Volume de um Cilindro" << endl;
	cout << "---------------------------------" << endl;
	cout << "Entre com o raio da base: ";
	cin >> raio;
	cout << "Entre com a altura: ";
	cin >> alt;

	VolumeCilindro();

	return 0;
}



void VolumeCilindro()
{
	float volume = 3.14159 * (raio * raio) * alt;

	cout << "O volume do cilindro é " << volume << endl;
}