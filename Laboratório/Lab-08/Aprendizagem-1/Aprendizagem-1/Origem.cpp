// exercício de aprendizagem 01
#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

void raize(float, float, float);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Digite para a, b e c para calculara raíz da equação quadrática ax² + bx + c." << endl;
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	raize(a, b, c);

	return 0;
}

void raize(float a, float b, float c)
{
	float delta = (pow(b, 2) - 4 * a * c);

	float raiz1 = ((-b + sqrt(delta)) / (2 * a));
	float raiz2 = ((-b - sqrt(delta)) / (2 * a));

	if (delta < 0)
	{
		cout << "Não existem raizes reais para essa equação";
	}
	else
	{
		cout << "As raizes reais para essa equação são: " << raiz1 << " e " << raiz2 << endl;
	}

		
}