#include <iostream>
#include <windows.h>
using namespace std;

// definição do registro
struct jogador
{
	char nome[40];
	float salario;
	unsigned gols;
};

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	jogador a = { "Bebeto", 200000, 600 };
	jogador b = { "Romário", 300000, 800 };

	cout << "Contratações para o próximo ano: " << a.nome << " e " << b.nome << "!" << endl;
	cout << "Preço da aquisição: R$" << a.salario + b.salario << "!" << endl;

	return 0;
}