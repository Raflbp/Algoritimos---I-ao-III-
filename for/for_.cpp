#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int i,pares, val;
	
	val = 0;
	
	
	for(i = 0; i <5 ; i++)
	{
		cin >> val;
		if(val % 2)
		{
			val = pares;
		}
	}
	
	cout << pares << " valores pares" << endl;
	
	return 0;
}