#include <iostream>
using namespace std;

struct dados {
    int n; // status: 1 = ocupado, -1 = vazio
    int k; // chave
};

// Função auxiliar de hash (módulo)
int hash_aux(int k, int m) {
    int h = k % m;
    if (h < 0)
        h += m;
    return h;
}

// Função de sondagem linear
int h(int k, int i, int m) {
    return (hash_aux(k, m) + i) % m;
}

// Função de inserção na tabela hash
int hash_insert(dados T[], int m, int k) {
    int i = 0, j;
    do {
        j = h(k, i, m);
        if (T[j].n != 1) {
            T[j].k = k;
            T[j].n = 1;
            return j;
        } else {
            i++;
        }
    } while (i != m);
    return -1;
}

int main() {
    int m;
    cin >> m;

    dados tabela[m];

    // Inicializa a tabela como vazia
    for (int i = 0; i < m; i++) {
        tabela[i].n = -1;
        tabela[i].k = -1;
    }

    int chave;
    while (cin >> chave && chave != 0) {
        hash_insert(tabela, m, chave);
    }

    // Imprime a tabela final
    for (int i = 0; i < m; i++) {
        cout << tabela[i].k;
            cout << " ";
    }
    cout << endl;

    return 0;
}
