#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i,n, val;
	
	n = 0;
	
	for( i = 0; i < 4 ; i++)
	{
		cin >> val;
		if(val % 2 == 0)
		{
			n++;
		}
		
	}
	
	cout << n <<" valores pares" <<endl;
	
	return 0;
}