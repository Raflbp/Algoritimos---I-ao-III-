#include <iostream>
#include <list>
using namespace std;

int main ()
{
	list <int> lista;  //ponteiro p/lista;
	list <int>::iterator p; //ponteiro aux
	int x;
	int i;
	
	for(i = 0; i < 4; i++)
	{
	    cin >> x;
	    lista.push_back(x);
	}
    
    p = lista.begin();
    
    for (p = lista.begin(); p != lista.end(); p++)
    {
        cout << *p << " " ;
    }
	
	return 0;
}
