// exercício de aprendizagem 04
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int km, m, dist;

	cout << "Entre com a distancia em metros: ";
	cin >> dist;

	km = (dist / 1000);
	m = (dist % 1000);

	cout << dist << " metros equivalem a " << km << " quilometros e " << m << " metros" << endl;

	return 0;
}