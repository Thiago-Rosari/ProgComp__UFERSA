// questão de revisão 4
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");

	// exibindo uma frase que contém acentos
	cout << "Acentuação é possível?" << endl;

	// leia uma palavra que contém acentos
	char palavra[40];
	cin >> palavra;

	// exibindo o que foi lido
	cout << palavra << endl;

	return 0;
}