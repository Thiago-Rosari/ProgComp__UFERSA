#include <iostream>
using namespace std;

int main()
{
	int total = 100000000 + 200000000;
	long long multi = 100000000 * 200000000LL; // LL no final para indicar que o valor deve ser guadado em um long long

	cout << "Total: " << total << endl;
	cout << "Multi: " << multi << endl;

	return 0;
}