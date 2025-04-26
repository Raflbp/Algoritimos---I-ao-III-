#include <iostream>
#include <iomanip>
using namespace std;

//Caluculo do peso ideal, com base na altura e no sexo da pesso
float ideal(float h,char sexo)
{
	float M1;
	
	if(sexo == 'M'){
		M1 = 72.7 * h -58;	
	}
	else{
		M1 = 62.1 * h - 44.7;
	}	
	
	return M1;
}

int main()
{
	float altura;
	char MF;
	float recomendado;
	
	cin >> altura >> MF;	
	recomendado = ideal(altura,MF);
	cout << fixed << setprecision(2) <<"Peso ideal = " << recomendado << " Kg" << endl;
	
	return 0;
}