//ORD - Mostrando e contando
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void bubbleSort(int vetor[], int tamanho)
{
	int i, j; // contadores
	int trab;
	bool troca;
	int limite;
	troca = true;
	int contador=0;

	limite = tamanho - 1;

	while (troca)
	{
		troca = false;
		for (i = 0; i < limite; i++)
			if (vetor[i] > vetor[i + 1])
			{
				trab = vetor[i];
				cout << "New trab:" << trab << endl;
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = trab;
				j = i;
				troca = true;
				contador++;
			}
		limite = j;
	}
	cout << "Contador:" <<contador << endl;
}

int main()
{
	int vet[100]; //vetor
	int tama; // tamanho do vetor
	int funcao[20];
	int j ;

	cin >> tama;

	for (int i = 0; i < tama; i++)
	{
		cin >> vet[i];
	}

		bubbleSort(vet,tama);


	return 0;
}
