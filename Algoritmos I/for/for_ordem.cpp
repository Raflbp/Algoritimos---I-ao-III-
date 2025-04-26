#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int val, i, x;

	x = 0;

	for(i = 0; i < 5 ; i++)
	{
		cin >> val;

		if(val % 2 == 0)
			x++;
	}

	cout << x << " valores pares" << endl;

	return 0;
}
