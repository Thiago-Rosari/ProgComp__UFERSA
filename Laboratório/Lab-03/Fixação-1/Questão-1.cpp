// exercício de fixação 1
#include <iostream>
using namespace std;

int main()
{
	int segundos, minutos;

	cout << "Digite uma quantidade em minutos " << endl;
	cin >> minutos;

	segundos = 60 * minutos;

	cout << "Exitem " << segundos << " segundos em " << minutos << " minutos." << endl;

	system("pause");
	return 0;
}