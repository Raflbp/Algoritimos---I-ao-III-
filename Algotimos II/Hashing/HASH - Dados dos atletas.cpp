#include <iostream>
#include <iomanip>
using namespace std;
 
struct info {
    string nome;
    int idade;
    float peso;
    float altura;
};
 
struct dado {
    info atleta;
    int k;
    int status; // 0: vazio, 1: ocupado, 2: removido
};
 
int geraChave(string nome) {
    int soma = 0;
    for (char c : nome)
        soma += (int)c;
    return soma;
}
 
int h1(int k, int m) {
    int r = k % m;
    return (r < 0) ? r + m : r;
}
 
int h2(int k, int m) {
    int r = k % (m - 1);
    if (r < 0) r += (m - 1);
    return 1 + r;
}
 
int dhash(int k, int m, int i) {
    return (h1(k, m) + i * h2(k, m)) % m;
}
 
void inserir(dado tabela[], int m, info novo) {
    int k = geraChave(novo.nome);
    for (int i = 0; i < m; i++) {
        int j = dhash(k, m, i);
        if (tabela[j].status != 1) {
            tabela[j].atleta = novo;
            tabela[j].k = k;
            tabela[j].status = 1;
            return;
        }
    }
}
 
int buscar(dado tabela[], int m, string nome) {
    int k = geraChave(nome);
    for (int i = 0; i < m; i++) {
        int j = dhash(k, m, i);
        if (tabela[j].status == 0)
            return -1;
        if (tabela[j].status == 1 && tabela[j].atleta.nome == nome)
            return j;
    }
    return -1;
}
 
void remover(dado tabela[], int m, string nome) {
    int pos = buscar(tabela, m, nome);
    if (pos != -1) {
        tabela[pos].status = 2;
        tabela[pos].k = -1;
        tabela[pos].atleta = {"", 0, 0, 0};
    }
}
 
void listar(dado tabela[], int m) {
    for (int i = 0; i < m; i++) {
        if (tabela[i].status == 1) {
            cout << "Nome: " << tabela[i].atleta.nome << endl;
            cout << "Idade: " << tabela[i].atleta.idade << endl;
            cout << fixed << setprecision(1);
            cout << "Peso: " << tabela[i].atleta.peso << endl;
            cout << fixed << setprecision(2);
            cout << "Altura: " << tabela[i].atleta.altura << endl;
            cout << endl;
        }
    }
}
 
int main() {
    int m;
    cin >> m;
    cin.ignore();
 
    dado tabela[100];
    for (int i = 0; i < m; i++) {
        tabela[i].status = 0;
        tabela[i].k = -1;
    }
 
    int opcao;
    while (cin >> opcao) {
        cin.ignore();
        if (opcao == 5) break;
 
        if (opcao == 1) {
            info novo;
            getline(cin, novo.nome);
            cin >> novo.idade >> novo.peso >> novo.altura;
            cin.ignore();
            inserir(tabela, m, novo);
        }
        else if (opcao == 2) {
            string nome;
            getline(cin, nome);
            int pos = buscar(tabela, m, nome);
            if (pos == -1) {
                cout << nome << " nao encontrado" << endl;
                cout << endl; // LINHA EM BRANCO EXIGIDA
            } else {
                cout << "Nome: " << tabela[pos].atleta.nome << endl;
                cout << "Idade: " << tabela[pos].atleta.idade << endl;
                cout << fixed << setprecision(1);
                cout << "Peso: " << tabela[pos].atleta.peso << endl;
                cout << fixed << setprecision(2);
                cout << "Altura: " << tabela[pos].atleta.altura << endl;
                cout << endl; // LINHA EM BRANCO EXIGIDA
            }
        }
        else if (opcao == 3) {
            string nome;
            getline(cin, nome);
            remover(tabela, m, nome);
        }
        else if (opcao == 4) {
            listar(tabela, m);
        }
    }
 
    return 0;
}