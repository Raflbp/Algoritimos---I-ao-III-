#include <iostream>
using namespace std;

struct dados
{
	int n; // status: 1 = ocupado, -1 = nunca usado, 2 = removido
	int k; // chave
};

// Hashing 1
int h1(int k, int m)
{	
	int result = (k  % m);
	
	if(result < 0){
		result += m;
	}
	return result;
}

// Hashing 2
int h2(int k, int m)
{
	int result;
	
	result = 1 + ((k % (m -1)));
	
	if(result < 0){
		result += m;
	}
	
	return result;
}

// Hashing d
int dhash(int k, int i, int m)
{
	return (h1(k, m) + i * h2(k, m)) % m;
}

int hash_insert(dados t[], int m, int k)
{
	int i = 0, j;
	do
	{
		j = dhash(k, i, m);
		if (t[j].n != 1)
		{
			t[j].k = k;
			t[j].n = 1;
			return j;
		}
		i++;
	}
	while (i != m);
	return -1;
}

int hash_search(dados t[], int m, int k)
{
	int i = 0, j;
	do
	{
		j = dhash(k, i, m);
		if (t[j].n == -1) // posição nunca usada ? pode parar
			return -1;
		if (t[j].n == 1 && t[j].k == k)
			return j;
		i++;
	}
	while (i < m);
	return -1;
}

int Hash_remove(dados t[], int m, int k)
{
	int j = hash_search(t, m, k);
	if (j != -1)
	{
		t[j].n = 2;   // removido
		t[j].k = -1;
		return 0;
	}
	return -1;
}

int main()
{
	int m;
	dados tabela[100];  // Tamanho fixo máximo
	int n, k;

	cin >> m;
	cin >> n;

	for (int i = 0; i < m; i++)
	{
		tabela[i].k = -1;
		tabela[i].n = -1;  // nunca usado
	}

	while (n != 5)
	{
		if (n == 1)
		{
			cin >> k;
			hash_insert(tabela, m, k);
		}
		else if (n == 2)
		{
			cin >> k;
			int pos = hash_search(tabela, m, k);
			cout << pos << endl;
		}
		else if (n == 3)
		{
			cin >> k;
			Hash_remove(tabela, m, k);
		}
		else if (n == 4)
		{
			for (int i = 0; i < m; i++)
			{
				cout << tabela[i].k << " ";
			}
			cout << endl;
		}
		cin >> n;
	}

	return 0;
}
