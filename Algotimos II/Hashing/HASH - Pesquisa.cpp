#include <iostream>
using namespace std;
 
// Estrutura para representar uma posição na tabela
struct dado {
    int k;
    int status; // 1 = ocupado, 0 = livre
};
 
// Função hash auxiliar (garante valor positivo)
int hash_aux(int k, int m) {
    int h = k % m;
    if (h < 0) h += m;
    return h;
}
 
// Sondagem linear
int hash1(int k, int i, int m) {
    return (hash_aux(k, m) + i) % m;
}
 
// Função de inserção usando sondagem linear
int hash_insert(dado t[], int m, int k) {
    int i = 0;
    int j;
    do {
        j = hash1(k, i, m);
        if (t[j].status != 1) {
            t[j].k = k;
            t[j].status = 1;
            return j;
        } else {
            i++;
        }
    } while (i != m);
    return -1; // Tabela cheia
}
 
int hash_search(dado t[], int m, int k)
{
    int i = 0;
    int j = 0;
    do {
        j = hash1(k,i,m);
        if (t[j].k == k)
            return j;
        i = i+1;
    } while (t[j].status!=0 && i<m);
    return -1;
}
 
int main() {
    int m;
    int escolha;
    int resultado;
    cin >> m;
 
    // Criando a tabela de tamanho fixo
    dado tabela[100];  // Definindo um tamanho máximo de 100
 
    // Inicializa a tabela
    for (int i = 0; i < m; i++) {
        tabela[i].k = -1;
        tabela[i].status = 0;
    }
 
    int chave;
    while (cin >> chave && chave != 0) 
        hash_insert(tabela, m, chave);
 
   
    cin >> escolha;
    resultado = hash_search(tabela,m,escolha);
    if (resultado == -1)
    {
        cout << "Chave " << escolha << " nao encontrada" << endl;
    }
        else
        cout << "Chave " << escolha << " encontrada na posicao " << resultado << endl;

 
    return 0;
}