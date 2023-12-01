#include <iostream>
using namespace std;

int main()
{
	// ligando um bit

	cout << "Ligar qual bit? ";
	int bit;
	cin >> bit;
	unsigned char mascara = 1 << bit;  

	unsigned char estado = 0;
	estado = estado | mascara;
	cout << (int)estado << endl;


	/*
		0 0 0 0 0 0 0 1  => 1  valor inicial
		0 0 0 0 0 0 0 0  => estato atual dos bits
	*/

	return 0;
}