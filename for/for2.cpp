#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int i; // contador
	int n; // numero de repeti��es
	int some; //soma dos numeros digitados
	int aux; // var aux pra leitura dos dados 
	
	cin >>n;
		
		
	for(i = 0 ; i<n; i++)		//i = 0; i inicializa��o (onde de inicia a reperi��o)
		cout << i << endl;		//i< 5; teste de parada (At� onde o teste vai rodar)
								//i++; incremento (roda o teste at� o {i<5} ser falso)
	return 0;
}