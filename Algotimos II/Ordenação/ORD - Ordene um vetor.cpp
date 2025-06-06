//ORD - Ordene um vetor
#include <iostream>
#include <cmath>
using namespace std;


void quickSort(int vetor[], int i, int j) {
    int trab, esq, dir, pivo;
    esq = i;
    dir = j;

    // Pivô é escolhido como a média dos índices esq e dir
    pivo = vetor[(int)round((esq + dir) / 2.0)];

    do {
        // Move o índice 'esq' até encontrar um valor maior ou igual ao pivô
        while (vetor[esq] < pivo)
            esq++;

        // Move o índice 'dir' até encontrar um valor menor ou igual ao pivô
        while (vetor[dir] > pivo)
            dir--;

        // Se os índices forem válidos, troca os elementos
        if (esq <= dir) {
            trab = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = trab;
            esq++;
            dir--;
        }
    } while (esq <= dir);

    // Recursão para a parte esquerda
    if (dir - i >= 0)
        quickSort(vetor, i, dir);

    // Recursão para a parte direita
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

    // Chamando a função quickSort para ordenar o vetor
    quickSort(vetor, 0, tamanho - 1);

    // Imprimindo o vetor ordenado
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] != -1) {  // Não imprime o valor -1
            cout << vetor[i] << " ";
        }
    }
    cout << endl;

    return 0;
}