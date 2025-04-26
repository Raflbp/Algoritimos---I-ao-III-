#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i = 0;
	int canditato_1 = 0;
	int canditado_2 = 0;
	double nulos = 0;
	double brancos = 0;
	int votos;
	double porcentagem_nulos = 0;
	double porcentagem_brancos = 0;
	
	
	cin >> votos;
	
	while(votos != 5)
	{
		i++;
		if(votos == 1)
		 canditato_1++;
	 
	 	 else if(votos == 2)
			  canditado_2++;
		  
		  else if(votos == 3)
			  nulos++;
		  
		  else if(votos == 4)  
			  brancos++;
		  
		cin >> votos;	  
	}
	porcentagem_nulos =  (nulos / i)* 100;
	porcentagem_brancos = (brancos / i) * 100;
	
	
	cout << "Votos ao candidato 1: " << canditato_1 << endl;
	cout << "Votos ao candidato 2: " << canditato_1 << endl;	
	cout << fixed << setprecision(2) << "Porcentagem de votos nulos: " << porcentagem_nulos << "%" << endl;
	cout << fixed << setprecision(2) << "Porcentagem de votos em branco: " << porcentagem_brancos << "%" << endl;
	
	if(canditato_1 > canditado_2)
		cout << "vitoria candidato 1" << endl;
	else if(canditado_2 > canditato_1) 
		cout << "Vitoria do candidado 2" << endl;
	else
		cout << "Nenhum vencedor" << endl;
	
	
	return 0;
}