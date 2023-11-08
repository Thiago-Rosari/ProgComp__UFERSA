// declarando, definindo e chamando uma função
#include <iostream>
#include <windows.h>
using namespace std;

void simples();   // protótipo da função

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "main() vai chamar a função simples():" << endl;
	simples();  // chamada da função

	return 0;

}

//======================================================================================

void simples()   // definição da função
{
	cout << "Eu sou uma função simples" << endl;
}