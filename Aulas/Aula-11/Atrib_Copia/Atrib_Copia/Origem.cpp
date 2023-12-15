#define _CRT_SECURE_NO_WARNINGS   // colocar para poder usar o strcpy
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char felino[20] = "Tigre";
	char animal[20];

	strcpy(animal, felino);     // strcpy ( destino, origem)
	strcpy(felino, "Jaguar");   // strcpy ( destino, origem)

	cout << "Felino: " << felino << endl;
	cout << "Animal: " << animal << endl;

	return 0;
}