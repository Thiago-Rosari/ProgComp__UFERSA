// exercício de aprendizagem 04
#include <iostream>
#include <windows.h>
using namespace std;

long long calculo(long long, long long);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	long long resultado = 200530 * 420800LL;

	cout << "Direto: " << resultado << endl;
	cout << "Função: " << calculo(200530, 420800) << endl;

	return 0;
}

//------------------------------------------------------------------------------------------

long long calculo(long long a, long long b)
{
	return a * b;
}