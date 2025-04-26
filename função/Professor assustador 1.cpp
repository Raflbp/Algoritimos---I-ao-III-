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

int main()
{
	int i;// contador 
	int N;// numero de alunos 
	float pontos[105];//pontuaçaõ de cada aluno 
	float med; // calculo da media no vetor  
	
	
	//Entrada na quantidade de alunos;
	cin >> N;
	
	//Entrada da pontuacao de cada aluno 
	for(i = 0; i < N; i++)
	{
		cin >> pontos[i];
	}
	
	// Resultado
	med = media(pontos,N);
	
	//Mostrando a media
	cout << fixed << setprecision(2) << "Media da turma = " << med << endl;
		
	
	return 0;
}