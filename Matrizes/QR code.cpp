#include <iostream>
using namespace std;

int main()
{
	int masc[3][3];// qr masculino
	int qr[3][3];// Qr code
	int l, c; // linha e coluna
	int x;

	masc[0][0] = 1 ;
	masc[1][0] = 1;
	masc[2][0] = 1 ;
	masc[0][1] = 0 ;
	masc[1][1] = 1 ;
	masc[2][1] = 0 ;
	masc[0][2] = 0 ;
	masc[1][2] = 0 ;
	masc[2][2] = 1 ;

	for(c = 0; c < 3; c++)
	{
		for(l = 0; l < 3; l++)
		{
			cin >> qr[l][c];
		}
	}

	for(c = 0; c < 3; c++)
	{
		for(l = 0; l < 3; l++)
		{
			if(qr[l][c] == masc[l][c])
			{
				x = true;
			}
			else
			{
				x = false;
			}
		}
	}

	if(x == true)
	{
		cout << "MASCULINO" << endl;
	}
	else
	{
		cout << "FEMININO" << endl;
	}


	return 0;
}
