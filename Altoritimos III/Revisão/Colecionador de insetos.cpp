#include <iostream>
#include <string>
using namespace std;

struct insetos {
    string nomes;
    double tamanhos;
};

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Para evitar problemas com getline ap�s cin

    insetos dado[100]; // Limite m�ximo arbitr�rio, mas segue seu formato

    // Leitura dos dados
    for (int i = 0; i < n; i++) {
        getline(cin, dado[i].nomes);
        cin >> dado[i].tamanhos;
        cin.ignore(); // Ignora o '\n' ap�s o n�mero
    }

    // Ordena��o por tamanho (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (dado[j].tamanhos > dado[j + 1].tamanhos) {
                // Troca toda a struct
                insetos temp = dado[j];
                dado[j] = dado[j + 1];
                dado[j + 1] = temp;
            }
        }
    }

    // Impress�o dos nomes ordenados
    for (int i = 0; i < n; i++) {
        cout << dado[i].nomes << endl;
    }

    return 0;
}
