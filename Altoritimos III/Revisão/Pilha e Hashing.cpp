#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    int tabela[100]; // suficiente para os exemplos
    int elementos[100];

    // Inicializa a tabela com -1
    for (int i = 0; i < M; i++) {
        tabela[i] = -1;
    }

    // Lê os elementos a serem armazenados (simulando uma pilha)
    for (int i = 0; i < N; i++) {
        cin >> elementos[i];
    }

    // Inserção com hash duplo e endereçamento aberto
    // Processa os elementos na ordem inversa (pilha: LIFO)
    for (int i = N-1; i >= 0; i--) {
        int k = elementos[i];
        int h1 = k % M;
        int h2 = 1 + (k % (M - 1));
        int pos = h1;
        int tentativas = 0;

        // Busca por posição livre
        while (tabela[pos] != -1 && tentativas < M) {
            tentativas++;
            pos = (h1 + tentativas * h2) % M;
        }

        if (tentativas < M) {
            tabela[pos] = k;
        }
    }

    // Exibe a tabela final
    for (int i = 0; i < M; i++) {
        cout << tabela[i];
        if (i < M - 1) cout << " ";
    }
    cout << endl;

    return 0;
}