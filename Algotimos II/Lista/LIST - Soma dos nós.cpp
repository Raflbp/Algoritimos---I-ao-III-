#include <iostream>
#include <list>
using namespace std;

int soma(list<int> lista)
{
    list <int>::iterator p;
    int resultado;
    
    for(p = lista.begin(); p != lista.end(); p++)
    {
        resultado += *p; 
    }
    
    return resultado;
    
}

int main ()
{
    
    list <int> lista;  //ponteiro p/lista;
	 //ponteiro aux
	int x;
	int resultado;
	
	cin >> x;
	
	while(x != 0)
	{
	    lista.push_back(x);
	    cin >> x;
	    
	}
    
    resultado = soma(lista);
    
    cout << resultado << endl;
    
    return 0;
}
