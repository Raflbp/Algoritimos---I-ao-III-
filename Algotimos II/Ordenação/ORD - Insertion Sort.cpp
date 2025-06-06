//ORD - Insertion Sort
#include <iostream>

using namespace std;

void insercaoDireta(int vetor[], int tamanho) {
    int i, j;
    int chave;
    
    for(j = 1; j < tamanho; j++) {
        chave = vetor[j];
        i = j - 1;
        
        while((i >= 0) && vetor[i] < chave) {
            vetor[i + 1] = vetor[i];
            i = i - 1;
        }
        
        vetor[i + 1] = chave;
    }
}

int main()
{
    int vet[50], num, i = 0;
    
    cin >> num;
    
    while(num != 0) {
        vet[i] = num;
        i++;
        cin >> num;
    }
    
    insercaoDireta(vet, i);
    
    for(int j = 0; j < i; j++) {
        cout << vet[j] << " ";
    }
    
    return 0;
}