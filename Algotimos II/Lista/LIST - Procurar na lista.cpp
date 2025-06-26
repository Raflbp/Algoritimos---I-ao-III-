#include <iostream>
#include <list>
using namespace std;

bool encontrar(list<int> lista, int x)
{
    bool encontrou = false;
    list<int>::iterator p; //ponteiro aux
    
    for(p = lista.begin(); p != lista.end(); p++)
    {
        if(*p == x)
        {
           encontrou = true;
        }
    }
    
    return encontrou;
}

int main ()
{
    list <int> lista;  //ponteiro p/lista;
	int x;
	int i;
	bool encontrado;
	int escolha;
    
      cin >> x;
      
      while(x != 0)
      {
          lista.push_back(x);
          i++;
          cin >> x;
      }
      
      cin >> escolha;
      
      encontrado = encontrar(lista,escolha);
      
      if (encontrado == true)
      {
          cout << "Encontrado" << endl;
      }
      
      else 
      {
          cout << "Nao encontrado" << endl;
      }
    
    
    return 0;
}
