#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int acertos;
	
	cin >> acertos; 
	
	if(acertos == 100)
	{
		cout << "Bombom!" << endl;
		cout << "Parabens!"<< endl;
	}	
	else
		if (acertos >= 90)
		cout << "quase" << endl;
		else
		cout << "Sem Bombom!" << endl;
		

	
	return 0;
}