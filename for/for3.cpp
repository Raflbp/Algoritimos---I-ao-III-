#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	float altura; // altura em metros 
	float maior; // maior altura 
	int i; // contador 
	int n; // numero de pessoas 
	
	cin >> n; // lendo numeros de pessoas 
	
	maior =0;
	
	for(i = 0;i < n; i++)
	{
		   cin >> altura;
		   if(altura > maior)
		   	maior = altura;	
	}
	
	cout << "maior altura" << maior << endl;
	
	return 0;
}