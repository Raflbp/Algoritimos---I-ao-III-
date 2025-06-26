#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lista1, lista2, lista3;
    int num;

    // L� a primeira lista
    while (cin >> num && num != 0) {
        lista1.push_back(num);
    }

    // L� a segunda lista
    while (cin >> num && num != 0) {
        lista2.push_back(num);
    }

    // Junta as listas
    lista3 = lista1;
    lista3.merge(lista2);  // merge s� funciona se ambas j� est�o ordenadas

    // Remove duplicados
    lista3.unique();

    // Mostra o resultado
    for (int val : lista3) {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}
