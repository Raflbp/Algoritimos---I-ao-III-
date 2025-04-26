#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i; // contador
	double n; // numeor de repetiçoes
	double h; // variavel
	
	cin >> n;
	h = 0;
	
	for(i = 1; i <= n; i++)
	{
		h += 1.0 / i;
	}

	cout << fixed << setprecision(4);
	cout << h << endl;

	return 0;
}
