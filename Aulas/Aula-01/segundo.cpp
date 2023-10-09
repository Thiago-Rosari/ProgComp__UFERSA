// segundo.cpp - erros de sintaxe

#include <iostream>
using namespace std;

int main()
{
    int cenouras;     // declara uma variável inteira
    cenouras = 25;    // atribui um valor a uma vari�vel

    cout << "Eu tenho " << cenouras << " cenouras." << endl;
    cenouras = cenouras - 1;     // decrementa a variável
    cout << "Agora eu tenho " << cenouras << " cenouras." << endl;

    system("pause");
    return 0;
}