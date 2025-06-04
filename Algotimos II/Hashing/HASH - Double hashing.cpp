#include <iostream>
#include <cmath>
using namespace std;

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

//main
int main()
{

	int m;//valores
	int chave;//chave

	//entradas
	cin >> chave >> m;

	for (int i = 0; i < m; i++)
	{
		cout << dhash(chave, i, m) ;
		    if (i < m - 1) cout << " ";
	}

	cout << endl;

	return 0;
}
