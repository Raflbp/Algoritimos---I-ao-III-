#include <iostream>
using namespace std;

int main()
{
	unsigned int n; // repetições
	unsigned int i; // contador
	unsigned int soma; // soma 
	unsigned int ante; // numero anterior
	unsigned int atual; // numero atual 
	
	cin >> n;
	soma = 0;
	ante = 0;
	atual = 1;
	
	for( i = 0; i < n; ++i)
	{
		cout << ante  << " " ;
		
		soma = ante + atual;
		ante = atual;
		atual = soma;
	}
	cout << endl;
	
	return 0;
}