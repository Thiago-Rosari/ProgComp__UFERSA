#include <iostream>
#include <windows.h>
#include <cstring>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	const int Tam = 15;
	char nome[Tam];                    // vetor "vazio"
	char apelido[Tam] = "c++owboy";    // vetor inicializado

	cout << "Olá! Eu sou " << apelido << "! Qual é o seu nome?" << endl;
	cin >> nome;

	cout << "Bem, " << nome << ", seu nome tem " << strlen(nome) << " letras" << endl;
	cout << "e está armazenado em um vetor de " << sizeof(nome) << "bytes." << endl;

	cout << "Sua inicial é " << nome[0] << endl;
	apelido[3] = '\0';  // caractere nulo
	cout << "Meu apelido é " << apelido << endl;

	return 0;
}