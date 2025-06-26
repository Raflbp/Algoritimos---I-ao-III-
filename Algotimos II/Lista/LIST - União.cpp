#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lista1, lista2, lista3;
    int num;

    // Lê a primeira lista
    while (cin >> num && num != 0) {
        lista1.push_back(num);
    }

    // Lê a segunda lista
    while (cin >> num && num != 0) {
        lista2.push_back(num);
    }

    // Junta as listas
    lista3 = lista1;
    lista3.merge(lista2);  // merge só funciona se ambas já estão ordenadas

    // Remove duplicados
    lista3.unique();

    // Mostra o resultado
    for (int val : lista3) {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}
