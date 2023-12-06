// exercício de fixação 4
#include <iostream>
#include <windows.h>
using namespace std;

#define MoleculaAgua 3e-23      // Massa de uma molécula de água em gramas
#define PesoGalao 3800          // Peso de um galão em gramas (4 * 950g)

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Digite a quantidade de galoes de agua: ";
	float galoes;
	cin >> galoes;

	float gramasDeAgua = PesoGalao * galoes;
	float moleculasDeAgua = gramasDeAgua / MoleculaAgua;

	cout << "Em " << galoes << " galoes existem " << moleculasDeAgua << " moleculas de agua." << endl;

	return 0;
}