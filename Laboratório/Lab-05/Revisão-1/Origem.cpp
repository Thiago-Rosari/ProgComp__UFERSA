// exercício de revisão 01
#include <iostream>
using namespace std;

void alarme();
void lerSenha();
void finalizar();

int main()
{
	alarme();
	lerSenha();
	finalizar();

	return 0;
}

//-----------------------------------------

void alarme()
{
	cout << "Iniciando....." << endl;
	cout << '\a';
}

void lerSenha()
{
	cout << "Senha: ";
	int senha;
	cin >> senha;
}

void finalizar()
{
	cout << "Finalizando....";
	cout << '\a';
}