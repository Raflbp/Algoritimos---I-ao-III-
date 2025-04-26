#include <iostream>
using namespace std;

int main()
{
	int matriz[11][11];//matriz
	int l,c; // contadores
	int linha,coluna;//quantidade que sera arazenado 
	
	//entrada na quantidade de linhas e colunas
	cin >> linha >> coluna;
	
	for(l = 0; l < linha; l++)
	{
		for(c = 0; c < coluna; c++)
		{
		cin >> matriz[l][c];
		}
	}
	
	for(l = 0; l < linha; l++)
	{
		for(c = 0; c < coluna; c++)
		{
		cout << matriz[l][c] << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}