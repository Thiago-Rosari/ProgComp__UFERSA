// operadores Bit a Bit
#include <iostream>
using namespace std;

int main()
{
//==================================================================================
	// NOT ( ~ ): inverte todos os bits do operando

	unsigned char n1 = 1;       // valor 1
	n1 = ~n1;                   // invertido, agora é 254
	cout << (int)n1 << endl;
	/*
		0 0 0 0 0 0 0 1  => 1
		1 1 1 1 1 1 1 0  => 254
	*/

//==================================================================================
	// LEFT SHIFT ( << ): desloca uma certa quantidade de bits para a esqurda

	unsigned char n2 = 1;       // valor 1
	n2 = n2 << 3;               // deslocando o valor 1, tres casas para a esquerda, agora é 8
	cout << (int)n2 << endl;

	/*
		0 0 0 0 0 0 0 1  => 1
		0 0 0 0 1 0 0 0  => 8
	*/

//===================================================================================
	//RIGHT SHIFT ( >> ): desloca uma certa quantidade para a direitaa

	unsigned char n3 = 8;       // valor 8
	n3 = n3 >> 1;               // deslocando o valor 8, uma casapara a direita, agora é 4
	cout << (int)n3 << endl;

	/*
		0 0 0 0 1 0 0 0  => 8
		0 0 0 0 0 1 0 0  => 4
	*/

//===================================================================================
	//AND ( & ): faz 'e' entre os bits dos seus operandos

	unsigned char n4 = 170;
	n4 = n4 & 15;                // valor 170 (e) 15
	cout << (int)n4 << endl;

	/*
		1 0 1 0 1 0 1 0  => 170
		0 0 0 0 1 1 1 1  => 15
		-----------------------
		0 0 0 0 1 0 1 0  => 10
	*/

//==================================================================================
	// OR ( | ): faz um 'ou' entre os bits do seu operando

	unsigned char n5 = 170;
	n5 = n5 | 15;              // valor 170 (ou) 15
	cout << (int)n5 << endl;

	/*
		1 0 1 0 1 0 1 0  => 170
		0 0 0 0 1 1 1 1  => 15
		-----------------------
		1 0 1 0 1 1 1 1  => 175
	*/

//=================================================================================
	// XOR ( ^ ): ou exclusivo - se os bits forem iguais, o valor sera 0

	unsigned char n6 = 170;
	n6 = n6 ^ 15;
	cout << (int)n6 << endl;

	/*
		1 0 1 0 1 0 1 0  => 170
		0 0 0 0 1 1 1 1  => 15
		-----------------------
		1 0 1 0 0 1 0 1  => 165
	*/
	return 0;
}