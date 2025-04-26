#include <iostream>
using namespace std;

int sinal(int n)
{
	int R1;

	if(n > 0)
		R1 = 1;

	else if(n == 0)
		R1 = 0;

	else
		R1 = -1;

	return R1;
}

int main()
{
	int R;// um numeoro real
	int nume;// numero de saida

	cin >> R;

	nume = sinal(R);

	if(nume ==  1)
		cout << "Positivo" << endl;
	else if(nume == 0)
		cout << "Zero" << endl;
	else if(nume == -1)
		cout << "Negativo" << endl;


	return 0;
}
