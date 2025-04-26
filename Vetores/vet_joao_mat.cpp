#include <iostream>
using namespace std;

int main()
{
	int n; // numero inteiro para multiplicacao  
	int vetor[1000]; //resultado da multiplicação  
	int i; //contador
	
	//entra no numero a ser multiplicado 
	cin >> n;
	
	for(i = 0; i < 11; i++)
	{
		vetor[i] = n * i;
	}
	
	for(i = 0; i < 11; i++)
	{
	cout << n << " x " << i <<" = " << vetor[i] << endl;
	}
	
	return 0;
}