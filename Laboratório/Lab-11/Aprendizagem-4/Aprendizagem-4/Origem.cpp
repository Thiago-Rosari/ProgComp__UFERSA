// exercício de aprendizagem 04
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char data1[15];
	char data2[15];
	char data3[15];
	char natal[] = "Natal";

	cout << "Quais suas datas comemorativas preferidas?" << endl;
	cin.getline(data1, 15);
	cin.getline(data2, 15);
	cin.getline(data3, 15);

	cout << data1 << ", " << data2 << " e " << data3 << ", são belas festas." << endl;

	if (strcmp(natal, data1) == 0)
	{
		cout << "O " << natal << " Também é uma das minhas datas preferidas!" << endl;
	} 
	else if (strcmp(natal, data2) == 0)
	{
		cout << "O " << natal << " Também é uma das minhas datas preferidas!" << endl;
	}
	else if (strcmp(natal, data3) == 0)
	{
		cout << "O " << natal << " Também é uma das minhas datas preferidas!" << endl;
	}

	return 0;
}