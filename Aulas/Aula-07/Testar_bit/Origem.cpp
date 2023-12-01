#include <iostream>
using namespace std;

int main()
{
	// testando um bit

	cout << "Testar qual bit? ";
	int bit;
	cin >> bit;
	unsigned char mascara = 1 << bit;

	unsigned char estado = 170;
	if (estado & mascara)
	{
		cout << "Ligado" << endl;
	}
	else
	{
		cout << "Desligado" << endl;
	}



	/*
		0 0 0 0 0 0 0 1  => 1  valor inicial
		1 0 1 0 1 0 1 0  => estato atual dos bits (170)

	*/

	return 0;
}