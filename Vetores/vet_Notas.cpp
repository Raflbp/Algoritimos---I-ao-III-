#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int nAlunos;// numero de alunos
	double nota[50];// nota dos alunos
	double media; // nota media
	double soma;// noma das notas
	int i, j = 0, maior = 0, menor = 0; // contador

	//entrada na quantidade de alunos a serem analizados
	cin >> nAlunos;

	//Entrada nas notas e soma das notas
	for(i = 0; i < nAlunos; i++)
	{
		cin >> nota[i];

		soma += nota[i];
		j++;
	}

	// calculo da media
	media = soma / j;

	//quantiadde acima e abaixo da media
	for(i = 0; i < nAlunos ; i++)
	{
		if(nota[i] >= media )
		{
			maior++;
		}
		else if(nota[i] < media)
		{
			menor++;
		}
	}

	// saida
	cout << fixed << setprecision(2) <<"Media da turma: " << media << endl;
	cout << "Alunos com nota acima da media: " << maior << endl;
	cout << "Alunos com nota abaixo da media: " << menor << endl;
	
	return 0;
}
