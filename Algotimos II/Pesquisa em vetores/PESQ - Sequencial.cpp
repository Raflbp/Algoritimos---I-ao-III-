//PESQ - Sequencial
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

 int sequencial(int vetor[],int tamanho, int x)
 {
 	 bool achou = false; // var aux p/ busca
 	 int i=0; // contador
 	 
 	   while (achou==false && i<tamanho)
 	 	 achou = vetor[i++]==x;
  
 	 if (achou)
 	 	 return(i-1);
 	 else
 	 	 return-1;
 }


int main()
{
    int j=0; // contador
    int y;//numero a ser encontrado
    int vet[100];// vetor 
    int n; //entrada no vetor 
    int busca ;//chama a funcao  
    int tama;//tamanho do contador 
    
    //entradas no vetor  
	cin >> n;
    
    while(n != -1 ){
        
           vet[j] = n;
            j++;
            
        cin >> n;
    }
    
    //atribuicao ao contador 
	tama = j;
	
    cin >> y;
    
 	busca = sequencial(vet,tama,y);
 	 
 	 //saida
    if (busca != -1)
        cout << y << " encontrado na posicao " << busca << endl;
    else
        cout << y << " nao encontrado" << endl;
     
    
    return 0;
 }