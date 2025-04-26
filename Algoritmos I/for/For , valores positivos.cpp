#include <iostream>
using namespace std;

int main()
{
	int i,x,valores ;
	
	x = 0;
	for(i = 0; i < 6 ; i++)
	{
		cin >> valores;
		if(valores > 0)
		{
			x++ ;
		}
	}
	
	
	cout << x <<" valores positivos" <<endl;
	
	return 0;
}