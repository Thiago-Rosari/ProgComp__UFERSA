#include <iostream>
using namespace std;

int main()
{
    int i;

    for (i = 0; i < 200; i++)
    {
        int vet[5];
        vet[i] = { 60 };
        cout << vet[i];

    }
    /*
      A mensagem de erro que aparece é de que o vetor so pode armazenar valores nas casas de 0 a 4
      mas essa mensagem não fecha o programa.
      A posição em que ele para de atribuir os valores depende quantas vezes o laço é repetido.
      Podemos concluir que não é recomendado atribuir valores a posições que não estejam dentro do limite do vetor
      por mais que o programa mostre as posições que vão além da capacidade dele.
    */
}