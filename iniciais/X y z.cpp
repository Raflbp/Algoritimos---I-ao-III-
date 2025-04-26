#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double x;
	double y;
	double z;
	double meio, maior, menor;
	cin >> x >> y >> z;
	
	if (x < y) {
		if (y < z) {
			// então x < z
				// z , y , x
				maior = z;
				meio = y;
				menor = x;			
		} else { // y > z
			if (x < z) {
				// y, z, x
				maior = y;
				meio = z;
				menor = x;	
			}
			else { // x > z
				// y, z, x
				maior = y;
				meio = z;
				menor = x;	
			}
		}	
	}
	else { // x > y
		if (y < z) {
			if (x < z) {
				// z , x, y
				maior = z;
				meio = x;
				menor = y;	
			}
			else { // x > z
				// x , z, y
				maior = x;
				meio = z;
				menor = y;	
			}	
		} else { // y > z
			// então x > z
				// x, y, z
				maior = x;
				meio = y;
				menor = z;	
		}
	}

	// saida
	cout << maior << endl;
	cout << meio << endl;
	cout << menor << endl;
	
	cout << endl;
	
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
	
	return 0;
}
