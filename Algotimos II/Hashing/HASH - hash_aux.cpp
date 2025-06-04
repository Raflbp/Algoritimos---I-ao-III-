#include <iostream>
using namespace std;

int hash_aux(int k,int m)
{
	int h;
	
	h = k % m;
	
	if(h < 0)
		h += m;
	
	return h;
}

int main()
{
	int n;// numero inteiro
	int result;// resultado 
	int i;
	   
	cin >> n >> i;	
	
	while(n !=0 && i != 0)
	{
		
		result = hash_aux(n,i);
	
		cout << result << endl;
	
		cin >> n >> i;
	
	}
	
	
	return 0;
}