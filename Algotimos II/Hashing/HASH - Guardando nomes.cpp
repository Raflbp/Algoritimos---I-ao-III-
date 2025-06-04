#include <iostream>
using namespace std;
 
struct dado {
    string info; // informação a ser armazenada
    int k;       // chave gerada pela soma dos ASCII
    int status;  // 0 = vazio, 1 = ocupado, 2 = removido
};
 
// Calcula a chave como soma dos valores ASCII da string
int geraChave(string s) {
    int soma = 0;
    for (char c : s)
        soma += (int)c;
    return soma;
}
 
// h1(k, m)
int h1(int k, int m) {
    int r = k % m;
    return (r < 0) ? r + m : r;
}
 
// h2(k, m)
int h2(int k, int m) {
    int r = k % (m - 1);
    if (r < 0) r += (m - 1);
    return 1 + r;
}
 
// dhash(k, m, i)
int dhash(int k, int m, int i) {
    return (h1(k, m) + i * h2(k, m)) % m;
}
 
// Inserção usando double hashing
int hash_insert(dado t[], int m, string s) {
    int k = geraChave(s);
    for (int i = 0; i < m; i++) {
        int j = dhash(k, m, i);
        if (t[j].status != 1) {
            t[j].info = s;
            t[j].k = k;
            t[j].status = 1;
            return j;
        }
    }
    return -1;
}
 
// Busca
int hash_search(dado t[], int m, string s) {
    int k = geraChave(s);
    for (int i = 0; i < m; i++) {
        int j = dhash(k, m, i);
        if (t[j].status == 0)
            return -1; // nunca usado, pode parar
        if (t[j].status == 1 && t[j].info == s)
            return j;
    }
    return -1;
}
 
// Remoção lógica
bool hash_remove(dado t[], int m, string s) {
    int pos = hash_search(t, m, s);
    if (pos != -1) {
        t[pos].status = 2;
        t[pos].info = "";
        t[pos].k = -1;
        return true;
    }
    return false;
}
 
// Listar tabela
void listar(dado t[], int m) {
    for (int i = 0; i < m; i++) {
        if (t[i].status == 1)
            cout << t[i].info << endl;
        else
            cout << "vazio" << endl;
    }
}
 
int main() {
    int m;
    cin >> m;
    cin.ignore(); // para limpar o \n da linha
 
    dado tabela[100]; // tamanho máximo
 
    for (int i = 0; i < m; i++) {
        tabela[i].status = 0;
        tabela[i].info = "";
        tabela[i].k = -1;
    }
 
    int opcao;
    while (cin >> opcao) {
        cin.ignore(); // ignora \n após o número
 
        if (opcao == 5)
            break;
 
        string s;
        switch (opcao) {
            case 1:
                getline(cin, s);
                hash_insert(tabela, m, s);
                break;
 
            case 2:
                getline(cin, s);
                {
                    int pos = hash_search(tabela, m, s);
                    if (pos != -1)
                        cout << s << " encontrado na posicao " << pos << endl;
                    else
                        cout << s << " nao encontrado" << endl;
                }
                break;
 
            case 3:
                getline(cin, s);
                hash_remove(tabela, m, s);
                break;
 
            case 4:
                listar(tabela, m);
                break;
        }
    }
 
    return 0;
}