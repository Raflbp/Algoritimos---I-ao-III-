// REC - Raiz quadrada
#include <iostream>
#include <cmath>
using namespace std;

float raiz(float x, float x0, float e )
{
	float soma, subtracao, divisao;
	
	soma = (x0*x0) + x ;
	subtracao = (x0*x0) - x ;
	divisao = soma / (2*(x0));
	
	   if(abs(subtracao) <= e)	
	   		return x0;
	   	else
	   		return raiz(x,divisao,e);
}

int main()
{
	float x;
	float x0;
	float e;
	
	cin >> x >> x0 >> e;
	
	cout << raiz(x,x0,e) << endl;
	
	return 0;
}