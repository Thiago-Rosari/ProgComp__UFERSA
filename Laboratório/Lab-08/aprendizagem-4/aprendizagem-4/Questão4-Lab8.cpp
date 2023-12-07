// exercício de aprendizagem 04
#include <iostream>
using namespace std;

int main()
{

	float a = 3.78575f * 8.129338f;      //ok
	float b = 3e30f + 2e15f;             //Sofreu arredondamento
	float c = 20518.56f * 2.0f;          //ok
	float d = 3.14159f + 1.45f;          //Sofreu arredondamento
	float e = 2.0f * 1e30f;              //ok

	cout << a << endl << b << endl << c << endl << d << endl << e << endl;

	cout << fixed;
	cout.precision(8);
	cout << endl;
	cout << a << endl << b << endl << c << endl << d << endl << e << endl;
}