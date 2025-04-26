#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x, y;// valores intirros 
	
	cin >> x >> y;// entrada dos valores
	
	while(x != y)
	{
		if(x < y)
		cout << "Crescente" << endl;
			else if(x > y)
			cout << "Decressente" <<endl;
		cin >> x >> y;
	}
	
	
	return 0;
}