//PESQ - Onde está o estudante?
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

 int binaria(int vetor[],int tamanho, int x)
 {
 	 bool achou; // var aux p/ busca
 	 int baixo, meio, alto; // var aux
 	 
	baixo = 0;
	alto = tamanho-1;
	achou = false;
	
 	 while ((baixo <= alto) && (achou == false))
 	 {
 	 	 meio = (baixo + alto) / 2;
		if (x < vetor[meio])
		 	 alto = meio- 1;
		else
		if (x > vetor[meio])
			baixo = meio + 1;
		else
			achou = true;
 	 }
 	 
		if (achou)
			return meio;
		else
			return-1;
 }


int main()
{
	int n;//numero de alunos 
	int matricula[10000];//numero de matricula de cada aluno 
	int j = 0;// contador 
	int posicao;//posicao onde o aluno esta 
	int encontrar;//numero a ser encontrado  
	
	//entrada no numero de alunos 
	cin >> n;
	
	//numero de matricula de cada aluno 
	for(int i = 0; i < n; i++)
	{
		cin >> matricula[j] ;
		j++;
	}
	
	//matricula a ser encontrada 
	cin >> encontrar;
	
	//chamando a funcao
	posicao = binaria(matricula,n,encontrar);
	
	
	//saida
	if(posicao != -1)
		cout << "Corredor " << posicao << endl;
	else 
		cout << "Nao localizado" << endl;;
	
	return 0;
}