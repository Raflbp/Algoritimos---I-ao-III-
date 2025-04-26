#include <iostream>
using namespace std;

int main()
{
	int i;
	int numero;
	int par;
	int n;
	
	cin >> n ;

	numero = 0;
	par = 0;
	
	for(i = 0; i < n; i++)
	{
		cin >> numero;
		
		if( numero % 2 == 0 && numero > par )
			par = numero ;
	}
	cout << par << endl;
	
	return 0;
}