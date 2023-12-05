#include <iostream>
using namespace std;

int main()
{
	float f = 6.1;
	cout << "f = " << f << endl;

	// exibe números com 8 casas depois da vírgula
	//cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << fixed;
	cout.precision(8);

	cout << "f = " << f << endl;

	return 0;
}