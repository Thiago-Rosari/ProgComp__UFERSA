// exercício de fixação 01
#include <iostream>
#include <windows.h>
using namespace std;

float imc(float, float);
double IMC(double, double);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float p = 1.75f;
	float m = 80.0f;
	double P = 1.75;
	double M = 80.0;

	cout << "Digite sua altura em metros: 1.75" << endl;
	cout << "Digite sua massa corporal em quilos: 80.0" << endl;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(10);

	cout << "Seu índice de massa corporal (IMC): " << imc(p, m) << endl;
	cout << "Seu índice de massa corporal (IMC): " << IMC(P, M) << endl;



	return 0;
}

//------------------------------------------------------------------------------------

float imc(float altura, float peso)
{
	float imc = peso / (altura * altura);

	return imc;
}

double IMC(double altura, double peso)
{
	double IMC = peso / (altura * altura);

	return IMC;
}