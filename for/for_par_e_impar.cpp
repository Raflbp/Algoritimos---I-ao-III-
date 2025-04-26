#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int N; // quantas vezes o programa vai rodar
	int i; // contador 
	int nume; // numeros a serem colocados 
	
	cin >> N;
	
	for(i = 0; i < N; i++)
	{
		cin >> nume;
		if(nume == 0) // zero
		{
			cout << "NULL" << endl;
		}
		else if(nume > 0 && nume % 2 == 0 )// numeros positivos e par 
		{
			cout << "EVEN POSITIVE" << endl;
		}
		else if(nume < 0 && nume % 2 == 0) // numero negativos e par 
		{
			cout << "EVEN NEGATIVE" << endl;
		}
		else if(nume > 0) // numeros positivos impares
		{
			cout << "ODD POSITIVE" << endl;
		}
		else if(nume < 0) // numeros negativos impares
		{
			cout << "ODD NEGATIVE" << endl;
		}
		
	}
	
	return 0;
}