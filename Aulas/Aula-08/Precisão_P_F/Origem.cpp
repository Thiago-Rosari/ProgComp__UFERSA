#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	// exibe números sempre com 6 casas depois da vírgula
	cout.setf(ios_base::fixed, ios_base::floatfield);

	float fltvar = 10.0 / 3.0;    // bom para até 6 dígitos
	double dblvar = 10.0 / 3.0;   // bom para até 15 dígitos
	float milhao = 1.0e6;

	cout << "float var = " << fltvar;
	cout << ", vezes um milhão = " << milhao * fltvar << endl;
	cout << "double var = " << dblvar;
	cout << ", vezes um milhão = " << milhao * dblvar << endl;

	return 0;
}