#include <iostream>
#include <climits>
using namespace std;


void isShort(long long num)
{
	if (num > SHRT_MAX)
	{
		cout << num << " Não cabe em 16 bits" << endl;
	}
	else {
		cout << num << " Cabe em 16 bits" << endl;
	}
}