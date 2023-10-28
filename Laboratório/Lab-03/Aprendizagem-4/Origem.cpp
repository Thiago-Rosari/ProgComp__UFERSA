// exercício de aprendizagem 4
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float distr, impt, fabri,res;

	cout << "Custo de fábrica: " << endl;
	cin >> fabri;

	distr = (28 * fabri) / 100;   // 16.800
	impt = (45 * fabri) / 100;    // 27.000

	res = fabri + distr + impt;

	cout << "O custo ao consumidor é de: " << res << endl;

	return 0;
}