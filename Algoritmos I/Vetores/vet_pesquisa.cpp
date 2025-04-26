#include <iostream>
using namespace std;

int main()
{
	int vetor[100]; // armazenamento dos numeros
	int i = 0, j = 0;// contador
	int x;// armazenado no vetor
	int dentro;//se esta dentro do vetor ou n
	int posicao = 0;// poscao e o numero respectivo

	//entrada nos numeros do vetor
	do
	{
		cin >> x ;

		if(x != 0)
		{
			j++;
			vetor[i] = x;
		}
		i++;
	}	while(x != 0);

	//numero q pode estar no vetor
	cin >> dentro;

	//teste para se dizer se esta no vetor
	for(i = 0; i < j; i++)
	{
		if(vetor[i] == dentro)
		{
			posicao = i;
		}
	}

	//saida
	if(vetor[posicao] == dentro)
	{
		cout << "Elemento " << dentro << " encontrado na posicao " << posicao << endl;
	}
	else if(dentro == 0)
	{
		cout << "Elemento " << 0 << " nao foi encontrado" << endl;
	}
	else
	{
		cout << "Elemento " << dentro << " nao foi encontrado" << endl;
	}


	return 0;
}
