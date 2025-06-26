#include <iostream>
#include <list>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Cria listas dinamicamente usando ponteiro
    list<int>* estoque = new list<int>();
    list<int>* venda = new list<int>();

    for (int i = 0; i < N; ++i) {
        int op;
        cin >> op;

        if (op == 1) {
            int cod;
            cin >> cod;
            estoque.push_front(cod); // Adiciona no início do estoque
        }
        else if (op == 2) {
            if (!estoque.empty()) {
                int cod = estoque.front(); // Pega o primeiro
                estoque.pop_front();       // Remove do estoque
                venda.push_front(cod);     // Adiciona no início da venda
            }
        }
    }

    // Exibe o estoque
    cout << "Estoque:";
    for (list<int>::iterator it = estoque.begin(); it != estoque.end(); ++it) {
        cout << " " << *it;
    }
    cout << endl;

    // Exibe a venda
    cout << "Venda:";
    for (list<int>::iterator it = venda->begin(); it != venda->end(); ++it) {
        cout << " " << *it;
    }
    cout << endl;

    // Libera a memória alocada
    delete estoque;
    delete venda;

    return 0;
}
