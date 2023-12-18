#include <iostream>
#include <Windows.h>
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

	// inicializando vetor de registro
	jogador equipe[22] =
	{
		{"Bebeto", 200000, 182},
		{"Romário", 300000, 178}
	};

	cout << "Contratações para o próximo ano: " << equipe[0].nome << " e " << equipe[1].nome << "!" << endl;
	cout << "Preço da aquisição: R$" << equipe[0].salario + equipe[1].salario << "!" << endl;

	return 0;
}