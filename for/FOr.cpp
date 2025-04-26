#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int i; // contador
	int n; // numero de repetições
	int soma; //soma dos numeros digitados
	int aux; // var aux pra leitura dos dados 
	double media; //media dos numeros digitados
	
	cin >>n;
		
	soma = 0;	
	
	
	for(i = 0 ; i<n; i++)		
	{
		cin >> aux;
		soma = soma +aux;
	}	
	
	media = (float)soma / n ;	
		
	cout <<"soma = " << soma <<endl;
	cout << "media = " << media << endl;
	
	return 0;
}