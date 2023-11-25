// exercício de revisão 02
#include <iostream>
using namespace std;

int num;

int f();
int g();

int main()
{
	num = 1;
	cout << f() + g() + num << endl;


	return 0;
}

//-----------------------------------------

int f()
{
	num = num + 3;
	return num;
}

int g()
{
	num = 2;
	return num;
}