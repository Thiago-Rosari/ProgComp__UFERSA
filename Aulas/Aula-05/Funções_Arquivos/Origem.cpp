#include <iostream>
#include "media.h"
using namespace std;

int main()
{
	float a = media(8, 10);
	float b = 12 + media(15, media(4, 2)) + a;
	cout << "As aulas tem " << b + media(20, 40) << " horas." << endl;

	return 0;
}