#include <iostream>
using namespace std;

int main()
{
	char cifra[50][50];//matriz
	int linha, coluna;//quantidade de linhas e colunas
	int l, c; // contador

	// entrada
	cin >> linha >> coluna ;

	for(l = 0; l < linha; l++)
	{
		for( c = 0; c < coluna; c++)
		{
			cin >> cifra[l][c];
		}
	}

	// saida
	for( c = 0; c < coluna; c++)
	{
		for(l = 0; l < linha; l++)
		{
			cout << cifra[l][c];
		}
	}

	cout << endl;
	return 0;
}
