//PESQ - Matrícula
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

struct dados //dados das pessoas
{
	string nome;//nome do aluno
	string curso;//curso do aluno
	int matricula; // matricula do aluno 
	
};


int main()
{
	   dados pessoa[20];	
	   int alunos; //quantidade de alunos
	   string encontrado;//nome do aluno a ser encontrado
	   string nome_encontrado;//nome a ser encontrado
	   string curso_encontrado;//curso a ser encontrado
	   int 	matricula_encontrado;//matricula a ser encontrado
	   int i =0;
	   
	   //entrada no numero de alinos
	   cin >> alunos;
	   
	   //armazenando nome,matricula e curso na struct
	   for(int i = 0; i < alunos; i++)
	   {
	   		getline(cin >> ws,pessoa[i].nome);
			getline(cin >> ws,pessoa[i].curso);
			cin >> pessoa[i].matricula;
	   } 
	   
	   //nome do aluno queesta sendo prcurado 
 	   getline(cin >> ws,encontrado);
	   
	   for(int i = 0; i < alunos; i++)
	   {
		   if(pessoa[i].nome == encontrado)
		   {
			   nome_encontrado = pessoa[i].nome; 
			  curso_encontrado = pessoa[i].curso;
			  matricula_encontrado = pessoa[i].matricula;
		   }
	   }
	   
	   	   if(nome_encontrado == encontrado)
		{
			  cout << nome_encontrado << endl;
			  cout << curso_encontrado << endl;
			  cout << matricula_encontrado << endl;
		}
			  else
				  cout << "Aluno nao localizado" << endl;
	   	
	
	return 0;
}