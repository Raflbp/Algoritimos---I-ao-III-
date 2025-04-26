#include <iostream>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	int g;
	int f;
	int dia;
	int mes;
	int ano;
	int ds;
	int delta;
	double frac;
	float  intpart;
	  	
	cin >> dia >> mes >> ano;
	
	 if( mes <= 2){  //delimitação de mes e ano
	 	 g = ano - 1;
	 	f = mes +13;
	 }else if(mes > 2){
	 	 g = ano ;
	 	  f = mes + 1;}

		   	 
	n = int(365.25 * g) + int(30.6 * f) - 621049 + dia;
	
		   	 
	if(n < 36523){	   	 // Delta em n
		delta = 2 ;  	 
	}else if(n > 36523 && n < 73048 ){
		delta = 1 ;
	} else if(n >= 73048){
		delta = 0;
	}
	  	 	
	 frac = modf((float)n/7, &intpart);
	ds =(round ( frac * 7) + delta + 1 );  	 
		   	 
	 
	if( ds == 1) // saida
		cout << "domingo" <<endl;
		else if (ds == 2)
			cout << "segunda-feira" << endl;
		else if(ds == 3)
			cout << "terca-feira" << endl;
		else if(ds == 4)
			cout << "quarta-feira" << endl;
		else if(ds == 5)
			cout << "quinta-feira" << endl;	
		else if(ds == 6)
			cout << "sexta-feira" << endl;
		else if(ds == 7)
			cout << "sabado" << endl;
	
		
	return 0;
}