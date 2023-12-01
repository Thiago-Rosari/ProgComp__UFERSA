#include <iostream>
using namespace std;

int main()
{
	// desligando um bit

	cout << "Desligar qual bit? ";
	int bit;
	cin >> bit;
	unsigned char mascara = 1 << bit;

	unsigned char estado = 255;
	estado = estado ^ mascara;
	cout << (int)estado << endl;


	/*
		0 0 0 0 0 0 0 1  => 1  valor inicial
		1 1 1 1 1 1 1 1  => estato atual dos bits

	*/

	return 0;
}