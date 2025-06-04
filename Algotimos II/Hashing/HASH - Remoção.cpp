    #include <iostream>

using namespace std;
 
// Estrutura para representar uma posição na tabela

struct dados {
	
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

int hash_insert(dados t[], int m, int k) {

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
 
int hash_search(dados t[], int m, int k)

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

int Hash_remove(dados t[],int m, int k){
	
    int j = 0;

    j = hash_search(t,m,k);
    
    if(j != -1){
    
       t[j].status = 2;
       t[j].k = -1;
       return 0; // consegui remover
	}
	      
    else
       return -1; // k nao esta na tabela
}
int main() {

    int m;
    int escolha;
    int resultado;
    dados tabela[100];  // Definindo um tamanho máximo de 100
    int chave;
    int i = 0;

    cin >> m;
 
    // Inicializa a tabela

    for (int i = 0; i < m; i++) {
        tabela[i].k = -1;
        tabela[i].status = 0;
    }

    while (cin >> chave && chave != 0) 
        hash_insert(tabela, m, chave);
 
 
    cin >> escolha;

    resultado = Hash_remove(tabela,m,escolha);
    	
	for(i = 0; i < m ; i++){	
	
	cout << tabela[i].k << " ";
	
	}

    return 0;
}
 
 
 