#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double valores, soma , media , positivos ;
	int i,x;
	
	x = 0;
	positivos = 0;
	
	for(i = 0; i < 5 ; i++)
	{
		cin >> valores;
		if(valores > 0)
		{
			x++ ;
			positivos = soma + valores ;
		} 
	}
	
	media =  positivos / x;
	 
	cout << x <<" valores positivos" <<endl;
	cout << fixed << setprecision(1);
	cout << media << endl;
	
	return 0;
}