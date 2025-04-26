#include <iostream>
using namespace std;

int main()
{
	int matriz[11][11], matriz2[11][11], matriz3[11][11]; //matriz
	int l, c; // contadores
	int linha, coluna; //quantidade que sera arazenado

	//entrada na quantidade de linhas e colunas
	cin >> linha >> coluna;

	//primeira matriz
	for(l = 0; l < linha; l++)
	{
		for(c = 0; c < coluna; c++)
		{
			cin >> matriz[l][c];
		}
	}

	// segunda matriz
	for(l = 0; l < linha; l++)
	{
		for(c = 0; c < coluna; c++)
		{
			cin >> matriz2[l][c];
		}
	}
	
	//Soma entre as matrizes
	for(l = 0; l < linha; l++)
	{
		for(c = 0; c < coluna; c++)
		{
			matriz3[l][c] = matriz[l][c] + matriz2[l][c];
		}
	}
	
	// saide da 3} matriz
	for(l = 0; l < linha; l++)
	{
		for(c = 0; c < coluna; c++)
		{
			cout << matriz3[l][c] << " ";
		}
		cout << endl;
	}


	return 0;
}
