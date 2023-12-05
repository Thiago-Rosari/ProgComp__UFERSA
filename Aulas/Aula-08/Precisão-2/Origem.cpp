#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float a = 2.34E+8;     // 234'000'000.0
	float b = a + 1.0f;    //         + 1.0
						   // 234'000'001.0

	cout << "a = " << a << endl;
	cout << "b - a = " << b - a << endl;


	return 0;
}