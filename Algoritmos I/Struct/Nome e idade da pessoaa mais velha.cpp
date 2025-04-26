#include <iostream>
using namespace std;

struct dados // dados de uma pessoa
{
	string nome;
	int idade;
};

int main()
{
	dados pessoa[5];// armazenar dados de 5 pessoas.
	int N;// numero de repetições.
	int i;// contador.
	int maiorIdade;// pessoa mais velha.
	string nome_velha;//nome da pessao mais velha
	
	cout << "Numero de pessoas" << endl;
	//lendo o numeor de pessoas.
	cin >> N;
	
	cout << "Nome de idade" << endl;
	
	// lendo a informação colocada no vetor.
	for(i = 0; i < N; i++)
	{
		getline(cin >> ws, pessoa[i].nome);
		cin >> pessoa[i].idade;	
	}
	
	//Numero inicial equivalente a pessoa mais velha.
	maiorIdade = -1;
	
	for(i = 0; i < N; i++)
	{
		if(pessoa[i].idade > maiorIdade)
		{
			maiorIdade = pessoa[i].idade;
			nome_velha = pessoa[i].nome;
		}
		
	}
	
	// mostrando a idade da pessoa mais velha e seu nome.
	cout << "Pessoa mais velha: " << nome_velha << endl;
	cout << "Maior idade: " << maiorIdade << endl;
	
	return 0;
}