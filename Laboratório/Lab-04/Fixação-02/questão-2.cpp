// exercício de fixação 2
#include <iostream>
#include <windows.h>
using namespace std;

void linha (void);
void pequena(void);
void media(void);
void grande(void);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	pequena();
	cout << endl;
	media();
	cout << endl;
	grande();
	cout << endl;

	cout << "Programação de Computadores." << endl;

	grande();
	cout << endl;
	media();
	cout << endl;
	pequena();
	cout << endl;

	return 0;
}
//-----------------------------------------------
void linha(void)
{
	cout << "----------";
}

//-----------------------------------------------

void pequena(void)
{
	linha();
}

void media(void) 
{
	linha(); linha();
}

void grande(void)
{
	linha(); linha(); linha();
}