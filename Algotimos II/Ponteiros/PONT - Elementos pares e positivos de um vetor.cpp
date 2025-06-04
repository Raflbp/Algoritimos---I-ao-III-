#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int *p = NULL; // ponteiro
	int n;//tamanho do vetor
	int i,j= 0;// contador
	int *v = NULL;//ponteiro
	
	cin >> n;

	v = new int[n];
	
	for(i = 0; i < n; i++)
		cin >> v[i];
	
	p = v;
	
	for(i = 0; i < n; i++)
	{
		if(*p > 0 && *p % 2 == 0)
			j++;
		
		p++;
	}
	
	cout << j<< endl;

	delete[] v;
	
	
	return 0;
}