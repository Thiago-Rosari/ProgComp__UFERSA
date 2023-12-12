// exercício de aprendizagem 02
#include <iostream>
#include <windows.h>
using namespace std;

float media_nova(float[]);
float media_antiga(float[], float[]);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float pesos[3] = { 2.0, 3.0, 4.0 };
	float notas[3];

	cout << "Digite a nota1 do aluno: ";
	cin >> notas[0];
	cout << "Digite a nota2 do aluno: ";
	cin >> notas[1];
	cout << "Digite a nota3 do aluno: ";
	cin >> notas[2];

	cout << "Media do aluno no sistema novo = " << media_nova(notas) << endl;
	cout << "Media do aluno no sistema antigo = " << media_antiga(notas, pesos);

	return 0;
}

//******************************************************************************************************

float media_nova(float notas[])
{
	float media;
	media = ((notas[0] + notas[1] + notas[2]) / 3);
	return media;

}
float media_antiga(float notas[], float pesos[])
{
	float media;
	media = (((notas[0] * pesos[0]) + (notas[1] * pesos[1]) + (notas[2] * pesos[2])) / 9.0);
	return media;
}