#include <iostream>
using namespace std;

int main()
{
	int mat[2][3];// 2 linhas,3 colunas 
	int l,c; // contadores para as linhas e colunas
	
	mat[0][0] = 10;mat[0][1] = 4;mat[0][2] = -6;
	mat[1][0] = 5;mat[1][1] = 12;mat[1][2] = 8;
	
	cout << " Linhas" << endl;
	
	//mostrar a 1º linha 
	for(c = 0; c < 3; c++)
		cout << mat[0][c] << " ";
	cout << endl;
	
	// mostras a 2º linha
	for( c = 0; c < 3; c++)
		cout << mat[1][c] << "  ";
	 cout << endl;
	
	 cout <<"  " <<endl;
	 cout <<"colunas " << endl; 
	 cout <<"  " <<endl;	 
	 	 
	//mostrando a 1º coluna
	for(l = 0; l < 2; l++)
		cout << mat[l][0] << "  " ;
	cout << endl;
	
	//mostrando a 1º coluna
	for(l = 0; l < 2; l++)
		cout << mat[l][1] << "  " ;
	cout << endl;
	
	
	cout << "linha por coluna" << endl;
	cout << "  " << endl;
	
	// mostra a matris
	for(l = 0; l < 2; l++)
	{
		for(c = 0; c < 3; c++)
		{	
			cout << mat[l][c] << " ";
		}
			cout << endl;

	}

	cout << "  " << endl;
	cout << "coluna por linha" << endl;
	cout << "  " << endl;

	// mostra a matriz por coluna
	for(c = 0; c < 3; c++) 
	{
		for(l = 0; l < 2; l++)
		{
			cout << mat[l][c] << " ";
		}
			cout << endl;

	}

	
	return 0;
}