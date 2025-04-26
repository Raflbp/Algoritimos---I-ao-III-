#include <iostream>
#include <string>
using namespace std;

int main()
{
	double nota;	

	cin >> nota ;
	
	while(nota > 0 && nota <= 10)
	{
		nota = nota % 2;
		cout <<"media = " << nota << endl;
		cin >> nota ;
	}
	
	cout << "nota invalida" << endl;
	
	return 0;
}