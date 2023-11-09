// exercício de fixação 3
#include <iostream>
#include <windows.h>
using namespace std;

void UmTres(void);
void Dois(void);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Começando agora: " << endl;

	UmTres();
	cout << "Três" << endl;

	cout << "Pronto!" << endl;

	return 0;
}

//---------------------------------------

void UmTres(void)
{
	cout << "Um ";

	Dois();
}

void Dois(void)
{
	cout << "Dois ";
}