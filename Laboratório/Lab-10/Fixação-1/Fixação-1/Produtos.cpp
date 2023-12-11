// exercício de fixação 01
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float kg[3];
	float valor[3] = { 1.50f, 2.00f, 1.00f };

	cout << "Prezado Cliente," << endl;
	cout << "Digite a quantidade de quilos desejados: " << endl;
	cout << "----------------------------------------" << endl;

	cout << "Alface: ";     cin >> kg[0];
	cout << "Beterraba: ";  cin >> kg[1];
	cout << "Cenoura: ";    cin >> kg[2];

	cout << endl;

	cout << "Resumo da Compra" << endl;
	cout << "-------------------------" << endl;

	double alface = kg[0] * valor[0];
	double beterraba = kg[1] * valor[1];
	double cenoura = kg[2] * valor[2];

	cout << fixed;      // cout.setf(ios_base::fixed, ios_base::floatfield);   	                  
	cout.precision(2);  // força a mostrar duas casas depois da vírgula
	cout << "Alface    = R$" << alface << endl;
	cout << "Beterraba = R$" << beterraba << endl;
	cout << "Cenoura   = R$" << cenoura << endl;

	cout << "-------------------------" << endl;

	cout << "Total     = R$" << alface + beterraba + cenoura << endl;


	return 0;
}