#include <iostream>
#include <list>
using namespace std;


int contar(list<int> lista)
{
    list <int>::iterator p; //ponteiro aux
    int contador;
    
    for (p = lista.begin(); p != lista.end(); p++)
    {
         contador++;
    }
    
    return contador;
}

int main ()
{
    
    list <int> lista;  //ponteiro p/lista;
	list <int>::iterator p; //ponteiro aux
	int x;
	int contador;
	
	cin >> x;
	
	while(x != 0)
	{
	    lista.push_back(x);
	    cin >> x;
	}
	
    contador = contar(lista);	
    
    cout << contador << endl;
     
    return 0;
}
