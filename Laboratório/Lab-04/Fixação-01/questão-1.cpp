// exercício de fixação 1
#include <iostream>
#include <windows.h>
using namespace std;

void sorria(void);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	
	sorria(); sorria(); sorria(); sorria();
	cout << endl;
	sorria(); sorria();
	cout << endl;
	sorria();
	cout << endl;

	return 0;
}

void sorria(void)
{
	cout << "Sorria! ";
}