// Utilizando argumentos passados na linha de comando
#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
	cout << "Programa: " << argv[0] << endl;

	if (argc > 1) {
		cout << "Arg: " << argv[1] << endl;
	}

	return 0;
}