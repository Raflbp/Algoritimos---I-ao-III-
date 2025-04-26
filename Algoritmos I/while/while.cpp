#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Um programa que leia varios numeros e soma
	// Entrada dada termina quando for digitado 0
	int x;// numero a ser lido
	int soma;
	
	soma =0;
	
	cin >> x;
	
	while(x != 0)
	{
		soma = soma + x;
		cin >> x;
	}
	
	cout <<"soma = " << soma << endl;
	
	return 0;
}