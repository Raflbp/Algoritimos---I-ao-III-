#include <iostream>
#include <iomanip>
using namespace std;

//calculo da media
float media(float notas[], int nAlunos){
	float med;	
	float s;
	
	med = 0;
	s= 0;
	
	for(int i = 0; i < nAlunos; i++)
	{
		s += notas[i];
		med = s / nAlunos;
	}
	
	return med;
}

//Numero de alunos que tem nota abaixo da media.
int nAbaixo(float notas[], int nAlunos, float media){
	
	int j = 0; //contador.
	
	for(int i = 0; i < nAlunos; i++)
	{
		if(notas[i] < media){
			j++;
		}
	}
	
	return j;
}

//Nmuero de alunos que tem nota acima da media.
int nAcima(float notas[], int nAlunos, float media){
		int k = 0;//contador
	
	for(int i = 0; i < nAlunos; i++)
	{
		if(notas[i] > media){
			k++;
		}
	}
	
	return k;
}


int main()
{
	int i;// contador .
	int N;// numero de alunos .
	float pontos[105];//pontuaçaõ de cada aluno. 
	float med; // calculo da media no vetor .
	int abaixo_da_media = 0;//alunos que estao abaixo da media.
	int acima_da_media = 0;// alunos que estao acima da media.
	
	//N alunos 
	cout << "Quantos alunos sao ?" << endl;
	
	//Entrada na quantidade de alunos;
	cin >> N;
	
	//Espaçamento 
	cout << endl;
	
	//Nota
	cout << "Digite a nota dos alunos " << endl;
	
	//Entrada da pontuacao de cada aluno. 
	for(i = 0; i < N; i++)
	{
		cin >> pontos[i];
	}
	
	//media de todos os alunos.
	med = media(pontos,N);
	
	//abaixo da media.
	abaixo_da_media = nAbaixo(pontos,N,med);
	
	//acima da media.
	acima_da_media = nAcima(pontos,N,med);
	
	//Mostrando a media.
	cout << fixed << setprecision(2) << "Media da turma = " << med << endl;
	
	//mostrar a quantidade de alunos que estão abaixo da media.
	cout << "Alunos com nota abaixo da media: " << abaixo_da_media << endl;
	
	// mostrar a quantidade de alunos que estao acima da media.
	cout << "Alunos com nota acima da media: " << acima_da_media << endl;
	
	return 0;
}