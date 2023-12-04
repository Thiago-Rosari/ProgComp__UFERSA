// exercício de aprendizagem 4
#include <iostream>
#include <windows.h>
using namespace std;


int bitsAltos(unsigned int);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);


	cout << "Digite um valor inteiro: ";
	unsigned int valor;
	cin >> valor;
	cout << "Os 16 bits mais altos desse valor correspondem ao número " << bitsAltos(valor) << endl;



	return 0;
}




int bitsAltos(unsigned int a)//Função que indentifica os bits mais altos
{
	unsigned int mascara = ~((1 << 16) - 1);
	unsigned int estado = (a & mascara);
	estado = estado >> 16;
	return estado;

}