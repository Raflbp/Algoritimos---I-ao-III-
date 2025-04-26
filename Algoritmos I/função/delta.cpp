#include <iostream>
#include <cmath>
using namespace std;

// calculo de deltas
float calc_delta(float a, float b, float c){
	
	float delta;
	delta = pow(b,2) - 4 * a * c;
	return delta;
}

int main()
{
	int a,b,c;//numeros de equação do segundo grau ax2 + bx +c=0
	float resu_delta;// resultado de delta
	
	cin >> a >> b >> c;
	
	resu_delta = calc_delta(a,b,c);
	
	cout << "delta = " << resu_delta << endl;
	
	return 0;
}