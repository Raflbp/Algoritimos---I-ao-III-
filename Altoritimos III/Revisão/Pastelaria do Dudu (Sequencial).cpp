#include <iostream>
#include <string>

using namespace std;

struct Produto {
    string nome;
    int quantidade;
};

int main() {
    int N;
    cin >> N;

    Produto estoque[N];

    for (int i = 0; i < N; i++) {
        cin >> estoque[i].nome >> estoque[i].quantidade;
    }

    cin.ignore();

    string busca;
    getline(cin, busca);

    bool encontrado = false;
    for (int i = 0; i < N; i++) {
        if (estoque[i].nome == busca) {
            encontrado = true;
            break;
        }
    }

    if (encontrado)
        cout << busca << " em estoque!" << endl;
    else
        cout << "nao existe " << busca << " em estoque!" << endl;

    return 0;
}

