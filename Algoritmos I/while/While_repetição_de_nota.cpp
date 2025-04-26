#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	double nota1,nota2,media,soma,x ;	
	
	cin >> nota1; 
	
	while(nota1 < 0 || nota1 > 10)
	{
		cout << "nota invalida" << endl;
		cin >> nota1;
	}
	
	cin >> nota2;
	
	while(nota2 < 0 || nota2 > 10)
	{
		cout << "nota invalida" << endl;
		cin >> nota2;
	}
	
	soma = nota1 + nota2;
	media = soma /2;
	
	cout << fixed << setprecision(2);
	cout << "media = "<< media << endl;
	
	cout << "novo calculo (1-sim 2-nao)" << endl;
	
	cin >> x;
	
	while(x != 2)
	{
		if(x == 1)
		{
			
		cin >> nota1;
		
		while(nota1 < 0 || nota1 > 10)
		{
			cout << "nota invalida" << endl;
			cin >> nota1;
		}
	
		cin >> nota2;
	
		while(nota2 < 0 || nota2 > 10)
		{
			cout << "nota invalida" << endl;
			cin >> nota2;
		}
	
		soma = nota1 + nota2;
		media = soma /2;
		
		cout << "media = "<< media << endl;
		}
	
		cout << "novo calculo (1-sim 2-nao)" << endl;
		cin >> x;

	}	   	
	
		return 0;	
}
	