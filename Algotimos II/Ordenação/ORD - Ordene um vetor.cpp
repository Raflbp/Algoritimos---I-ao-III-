//ORD - Ordene um vetor
#include <iostream>
#include <cmath>
using namespace std;


void quickSort(int vetor[], int i, int j) {
    int trab, esq, dir, pivo;
    esq = i;
    dir = j;

    // Piv� � escolhido como a m�dia dos �ndices esq e dir
    pivo = vetor[(int)round((esq + dir) / 2.0)];

    do {
        // Move o �ndice 'esq' at� encontrar um valor maior ou igual ao piv�
        while (vetor[esq] < pivo)
            esq++;

        // Move o �ndice 'dir' at� encontrar um valor menor ou igual ao piv�
        while (vetor[dir] > pivo)
            dir--;

        // Se os �ndices forem v�lidos, troca os elementos
        if (esq <= dir) {
            trab = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = trab;
            esq++;
            dir--;
        }
    } while (esq <= dir);

    // Recurs�o para a parte esquerda
    if (dir - i >= 0)
        quickSort(vetor, i, dir);

    // Recurs�o para a parte direita
    if (j - esq >= 0)
        quickSort(vetor, esq, j);
}

int main() {
    int vetor[10]; 
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

   
    for (int i = 0; i < tamanho; i++) {
        cin >> vetor[i];
        if (vetor[i] == -1) break;  // Termina quando recebe -1
    }

    // Chamando a fun��o quickSort para ordenar o vetor
    quickSort(vetor, 0, tamanho - 1);

    // Imprimindo o vetor ordenado
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] != -1) {  // N�o imprime o valor -1
            cout << vetor[i] << " ";
        }
    }
    cout << endl;

    return 0;
}