#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double media;
	double desvio_padrao;
	double x;
	double pi;
	double fx;
	

	pi = 3.14159;


	cin >> x;
	cin >> media;
	cin >> desvio_padrao;
	
	double a = 1.0 / sqrt(2.0 * pi * pow(desvio_padrao, 2));
	double b = -1.0 * (pow(x - media, 2) / (2.0 * pow(desvio_padrao, 2)));

	fx = a * exp(b);


	cout << fixed << setprecision(4);//qualtidade de casas decimais 
	cout << fx << endl;

	return 0;
}
