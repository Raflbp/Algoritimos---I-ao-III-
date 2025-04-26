#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double A;
	double B;
	double C;
	double d;
	float	x;
	float	_x;
	double sub;

	cout << "A, B, C" << endl;
	cin >> A >> B >> C;

	d = pow(B, 2) - 4 * A * C; // Delta 
	sub = (2 * A); // Subtração 
	x = (-B +  sqrt(d)) / sub;
	_x = (-B -  sqrt(d)) / sub;
	
		cout << fixed << setprecision(5);
	if (sub == 0)	
		cout << "Impossivel calcular" << endl;
	
	else if (d < 0)
		cout << "Impossivel calcular" << endl;
	
	else{
		cout << "R1 = " << x << endl;
		cout << "R2 = " << _x << endl;
	}
	
	return 0;
}
