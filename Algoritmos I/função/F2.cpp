#include <iostream>
using namespace std;

// retornar a soma dos elementos do vet
int soma (int vet[], int N)
{
    int s;
    int i;

    s = 0;
    for (i = 0; i < N; i++)
    {
        s = s + vet[i];
    }
    return s;
}



int main()
{

    int vetor[5]; // Armazenamento de dados
    int N; //Quantidade de elemntos inseridos em um vetor 
    int i; //Contador
    int s; //Soma dos elementos do vetor

    //lendo elementos do vetor 
    cin >> N;
    for ( i = 0; i < N; i++)
    {
        cin >> vetor[i];
    }

    //Calculando mostrando a soma dos elementos do vetor 

     s = soma(vetor,N);

    cout << "Soma =" << s << endl;

    return 0;
}
