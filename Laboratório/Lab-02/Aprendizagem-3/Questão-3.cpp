//exercício de aprendizagem 3
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << left; cout.width(10); cout << "Produto";
	cout << right; cout.width(10); cout << "Preço/Kg";
	cout << right; cout.width(17); cout << "Pedido (Kg)";
	cout.width(16); cout << "Total Parcial" << endl;

	cout << left; cout.width(10); cout << "-------";
	cout << right; cout.width(10); cout << "--------";
	cout << right; cout.width(17); cout << "-----------";
	cout.width(16); cout << "-------------" << endl;

	cout << left; cout.width(10); cout << "Alface";
	cout << right; cout.width(12); cout << "R$ 1,25/KG";
	cout << right; cout.width(9); cout << "3,2Kg";
	cout.width(16); cout << "R$ 4,00" << endl;

	cout << left; cout.width(10); cout << "Beterraba";
	cout << right; cout.width(12); cout << "R$ 0,65/KG";
	cout << right; cout.width(9); cout << "6,0Kg";
	cout.width(16); cout << "R$ 3,90" << endl;

	cout << left; cout.width(10); cout << "Cenoura";
	cout << right; cout.width(12); cout << "R$ 0,90/KG";
	cout << right; cout.width(9); cout << "10,0Kg";
	cout.width(16); cout << "R$ 9,00" << endl;

	return 0;
}