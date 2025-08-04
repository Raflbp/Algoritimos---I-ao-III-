#include <iostream>
#include <string>

using namespace std;

struct Produto {
    int codigo;
    string nome;
    int quantidade;
};

int buscaBinaria(Produto estoque[], int N, int codBusca) 
{
    int inicio = 0;
    int fim = N - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (estoque[meio].codigo == codBusca) {
            return meio;
        }
        else if (estoque[meio].codigo < codBusca) {
            inicio = meio + 1;
        }
        else {
            fim = meio - 1;
        }
    }

    return -1; // não encontrado
}

int main() {
    int N;
    cin >> N;

    Produto estoque[N];

    for (int i = 0; i < N; i++) {
        cin >> estoque[i].codigo >> estoque[i].nome >> estoque[i].quantidade;
    }

    int codigoBusca;
    cin >> codigoBusca;

    int pos = buscaBinaria(estoque, N, codigoBusca);

    if (pos != -1) {
        cout << estoque[pos].nome << " em estoque!" << endl;
    } else {
        cout << "Nao existem produtos com esse codigo em estoque!" << endl;
    }

    return 0;
}
