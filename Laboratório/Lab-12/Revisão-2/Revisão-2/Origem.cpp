// exercício de revisão 02
#include <iostream>
#include <windows.h>
using namespace std;

// definição do registro
struct complexo
{
	float real;
	float img;
};

// protótipo da função
complexo operator+(complexo, complexo);
ostream& operator<<(ostream&, complexo&);
istream& operator>>(istream&, complexo&);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Digite os complexos: " << endl;
	complexo c1;
	cin >> c1;
	complexo c2;
	cin >> c2;

	complexo res = c1 + c2;
	cout << res;

	return 0;
}

//*************************************************************************************************************************

// definição da função
complexo operator+(complexo a, complexo b)
{
	complexo c;

	c.real = a.real + b.real;
	c.img = a.img + b.img;

	return c;
}

ostream& operator<<(ostream& os, complexo &c)
{
	os << c.real << showpos << c.img << noshowpos << "i" << endl;
	return os;
}

istream& operator>>(istream& is, complexo& temp)
{
	cin >> temp.real;
	cin >> temp.img;
	cin.ignore();

	return is;
}