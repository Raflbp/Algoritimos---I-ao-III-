#include <iostream>
using namespace std;

int main()
{
	int usuarios;// numero de usuarios do facebook
	int contato[1005];// numero de contato de cada pessoa
	int menor, maior = 0;// menor e maior numero dentro do vetor
	int i;// contador

	//Entrada na quantidade de usuaios
	cin >> usuarios;

	// numero de cada contato e maior e menor numero
	for(i = 0; i < usuarios; i++)
	{
		cin >> contato[i];

		if(contato[i] > maior )
		{
			maior = contato[i];
		}
		
		if(menor > contato[i]){
			menor = contato[i];
		}
	}

	cout << "Menor numero de contatos: " << menor << endl;
	cout << "Maior numero de contatos: " << maior << endl;

	return 0;
}
