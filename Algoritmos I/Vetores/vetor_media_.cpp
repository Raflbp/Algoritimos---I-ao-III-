#include <iostream>
using namespace std;

int main()
{
	int idade[5]; // armazenar até 5 idades
	int i;// contador
	int n;// quantas pessoas foram cadastradas 
	int aux; // variavel auxiliar para leitura das idades 
	float media; // idade média das pessoas 
	int soma; // soma das variaveis 
	
	//lendo idades até ser digitado -1
	i = 0;
	cin >> aux;
	while( aux != -1)
	{
		idade[i] = aux;
		i++;
		cin >> aux;
	} 
	n = i; // quantas pessoas foram cadastradas 
	
	soma = 0;
	for(int i = 0; i < n ; i++)
	{
		soma += idade[i];// soma = soma + idade[1];
		media = (float) soma / n;
	}
	
	cout <<"Idade media "<< media << endl;
	
	return 0;
}
