#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int *p = NULL; // ponteiro
	int n;
	int i;
	int *v = NULL;
	int maior;
	
	cin >> n;

	v = new int[n];
	
	for(i = 0; i < n; i++)
		cin >> v[i];
	
	p = v;
	maior = *p;
	
	for(i = 0; i < n; i++)
	{
		if(*p > maior)
		{
			maior = *p;
		}
		p++;
	}
	
	cout << maior << endl;
	
	
	
	delete[] v;
	
	
	return 0;
}