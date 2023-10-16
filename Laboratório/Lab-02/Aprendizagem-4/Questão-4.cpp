#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	if (argc > 1) {
		cout << "Estou aprendendo " << argv[1] << argv[3] << endl;
	}

	system("pause");
	return 0;
}