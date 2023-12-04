// exercício de aprendizagem 5
#include <iostream>
#include <windows.h>
using namespace std;

void exibirBits(unsigned char);
bool testarBit(unsigned char, int);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Digite um valor entre 0 e 255: ";
	int valor;
	cin >> valor;
	unsigned char num = valor;

	cout << "O número " << valor << " em binário é ";
	exibirBits(num);
	cout << endl;


	return 0;
}

//========================================================================================================

//Função para retornar o valor dos bits
void exibirBits(unsigned char a)
{
	cout << testarBit(a, 7);
	cout << testarBit(a, 6);
	cout << testarBit(a, 5);
	cout << testarBit(a, 4);
	cout << testarBit(a, 3);
	cout << testarBit(a, 2);
	cout << testarBit(a, 1);
	cout << testarBit(a, 0);


}

//Função para testar os bits
bool testarBit(unsigned char a, int bit)
{
	if (a & (1 << bit))
		return true;
	else
		return false;
}