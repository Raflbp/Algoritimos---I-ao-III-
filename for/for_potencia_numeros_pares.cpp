#include <iostream>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N; //nº de repetições 
	int i; // contador 
	int par; // numeors pares  
	int potencia;
	
	cin >> N;
	par = 0;
	
	for(i = 2; i <= N; i++)
	{
		if(i % 2 == 0)
		{
			par = i;
			potencia = pow(par,2);
			cout << par <<"^2 = " << potencia <<endl; 
		}
	}
	
	return 0;
}