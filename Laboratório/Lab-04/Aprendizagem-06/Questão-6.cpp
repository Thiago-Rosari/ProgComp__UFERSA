// exercício de aprendizagem 6
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

//====================================
//== protótipo da função =============

void Inicializar(void);
void ligar(void);
void verificar(void);
void ativar(void);

//------------------------------------

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	srand(time(NULL));
	int ver = rand();

	Inicializar();

	if (ver >= 16384)
	{
		cout << "Inicialização Concluída. " << endl;
	}
	else
	{
		cout << "Falha na Inicialização. " << endl;
	}

	return 0;
}






/*======================================================================
		definição da função
======================================================================*/

void Inicializar(void)
{


	cout << "Inicializando Sistema: " << endl;
		
		ligar();
		verificar();
		ativar();
	
	cout << "Inicialização concluída." << endl;

}


/*-----------------------------------------------------------------------*/

void ligar(void)
{
	cout << "- Ligando dispositivos" << endl;
}
void verificar(void)
{
	cout << "- Verificando integridade" << endl;
}
void ativar(void)
{
	cout << "- Ativando processos" << endl;
}