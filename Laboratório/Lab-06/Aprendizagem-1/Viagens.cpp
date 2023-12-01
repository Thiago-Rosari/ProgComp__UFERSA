// exercício de aprendizagem 01
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int hora1, hora2, min1, min2, HoraFinal, MinFinal;
	char pontos;

	cout << "Digite o horário de partida (HH:MM): ";//ENTRADA DO HORÁRIO DE PARTIDA
	cin >> hora1;
	cin >> pontos;
	cin >> min1;

	cout << "Digite o horário de chegada (HH:MM): "; //ENTRADA DO HORÁRIO DE CHEGADA
	cin >> hora2;
	cin >> pontos;
	cin >> min2;
	cout << "\n";


	//CÁLCULO DAS HORAS E MINUTOS FINAIS
	HoraFinal = (hora2 - hora1);
	MinFinal = (min2 - min1);


	if (MinFinal < 0)//CÁLCULO DA DIFERENÇA ENTRE OS HORÁRIOS
	{
		HoraFinal = HoraFinal - 1;  // tira uma hora
		MinFinal = MinFinal + 60;  // adiciona 60 minutos
	}

	cout << "O tempo total de viagem foi de " << HoraFinal << " horas e " << MinFinal << " min.";//SAÍDA DO PROGRAMA

	return 0;
}