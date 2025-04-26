#include <iostream>
using namespace std;

int main()
{
	int idade[5]; // armazenar até 5 idades
	int i;// contador 
	int maior; // maior numero armazzenado 
	
	//lendo a idade e armazenadno os vetores
	for(i = 0; i < 5; i++)
		cin >> idade[i];
	
	maior = -1;
	
	for(int i = 0; i < 5; i++)
		if(idade[i] > maior)
			maior = idade[i];
	
	cout <<"Maior idade " << maior << endl;
	
	return 0;
}
