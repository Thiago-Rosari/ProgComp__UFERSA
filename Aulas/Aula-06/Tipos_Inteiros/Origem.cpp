#include <iostream>
#include <windows.h>
#include <climits>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	short n_short = SHRT_MAX;  // constantes da biblioteca <climits> para ver o tamanho máximo das variáveis
	int n_int = INT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	// utilizando as constantes <climits>
	cout << "Valores Máximos: " << endl;
	cout << "short: " << n_short << endl;
	cout << "int: " << n_int << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;
	cout << endl;

	// utilizando o sizeof
	cout << "short tem " << sizeof n_short << " bytes." << endl;
	cout << "int tem " << sizeof(int) << " bytes." << endl;
	cout << "long tem " << sizeof n_long << " bytes." << endl;
	cout << "long long tem " << sizeof n_llong << " bytes." << endl;


	return 0;
}

/*------------------------------------------------------------------------------------------------
	sizeof é um operador que retorna a quantidade em bytes que é ocupada pela variável selecionada
*/