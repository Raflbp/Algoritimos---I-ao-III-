#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int L;// Largura
	int C ; //Cumprimento
	int R1; //Raio de 1
	int R2; //Raio de 2
	int RT; // R1 * 2 + R2 * 2.

	cin >> L >> C >> R1 >> R2;

	RT = (R1 * 2) + (R2 * 2)- 1;

	if(L >= RT && (C >= R1 || C >= R2))
	{
		cout << "S" << endl;
	}
	else if(C >= RT && (L >= R1 || L >= R2))
	{
		cout << "S" << endl;
	}
	else
		cout << "N" << endl;

	return 0;
}
