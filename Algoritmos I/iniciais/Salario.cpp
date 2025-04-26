#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double salario;
	double resultado;
	double final;
	
	cin >> salario;
	
	cout<< fixed<< setprecision(2);
	if(salario >=0 && salario <= 2000)
		cout <<"Insento" << endl;
	
	else if(salario > 2000 && salario <= 3000){
	resultado = salario * 8/100;
		cout << "R$ " <<  resultado  <<endl;
	}
	else if(salario > 3000 && salario <= 4500)
		cout << "R$ " << salario * 18/100 << endl;
	
	else if(salario > 4500)
		cout << "R$ " << salario * 28/100 << endl;
	
	
	return 0;
}