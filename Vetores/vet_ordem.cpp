#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
	int j = 0;// contador
	float x; // entrada
	float tempo[100];// tempo de cada competidor
	float coloca[100]; //ordenm de classificacao
	int posicao[100], maior = 0; //posicao

	// leitura de tempo  dos corredor
	while(cin >> x && x != -1)
	{
		tempo[j] = x;
		j++;
	}

	//Ordenar o tempo
	for(int i = 0; i < j; i++)
	{
		if(tempo[i] > maior)
		{
			maior = tempo[i];
			coloca[i] = maior;
		}
		else if(tempo[i] < maior)
		{
			coloca[i] = maior;
		}
	}

	cout << "Classificacao:" << endl;
	// Exibe a classificação geral da corrida
	for(int i = 0; i < j; i++)
	{
		cout << posicao[i] << endl;;
	}


	return 0;
}
