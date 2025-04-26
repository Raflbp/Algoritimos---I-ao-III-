#include <iostream>
using namespace std;

//retorno de x + y
int soma (int x, int y)
{
	int s1;
	s1 = x + y;
	return s1;
}


int main()
{
	int a,b;
	int s;
	
	cin >> a >> b;
	s = soma(a,b) ;
	cout << "Soma = " << s << endl;
		
	return 0;
}