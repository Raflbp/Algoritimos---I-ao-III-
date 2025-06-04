#include <iostream>
#include <iomanip>
using namespace std;

int hash_aux(int k,int m)
{
	int h;
	
	h = k % m;
	
	if(h < 0)
		h += m;
	
	return h;
}

int hash1(int k, int i, int m) {
	
    return (hash_aux(k, m) + i) % m;

}


int main()
{
	int m;// numero inteiro
	int result;// resultado 
	int chave;
	
	cin >> chave >> m;
	
	for(int i = 0; i < m; i++)
	{
		result = hash1(chave,i,m);
		cout << result << " " ; 
	}
	
	
	
	return 0;
}