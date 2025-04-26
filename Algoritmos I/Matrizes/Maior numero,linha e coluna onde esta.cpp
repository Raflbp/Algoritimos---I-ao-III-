#include <iostream>
using namespace std;

int main()
{
	int mat[2][3];// 2 linhas,3 colunas
	int l, c; // contadores para as linhas e colunas
	int maior = 0;//Maior numero
	int maiorL = 0, maiorC = 0;//maior em linha e coluna

	mat[0][0] = 10;
	mat[0][1] = 4;
	mat[0][2] = -6;
	mat[1][0] = 5;
	mat[1][1] = 12;
	mat[1][2] = 8;

	//for para achar o maior numero, coluna e linha onsaele se encontras
	for(l = 0; l < 2; l++)
	{
		for(c = 0; c < 3; c++)
		{
			if(mat[l][c] > maior)
				maior = mat [l][c];
			maiorL = l;
			maiorC = c;
		}
	}


	cout << "Maior numero da matriz = " << maior  << endl;
	cout << "Linha = "  << maiorL << endl;
	cout << "Coluna = " << maiorL << endl;


	return 0;
}
