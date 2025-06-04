#include <iostream>
#include <string>
using namespace std;

int main() {
	int * v = NULL; //ponteiro para um vetor
	int n;// tamanho do vetor
	int i;// vonatdor
	int * p = NULL;

	cin >> n;

	v = new int[n];// alocar dinamicamente o vetor

	// lendo os valores do vetor
	for(i = 0; i < n; i++)
		cin >> v[i];

	p = v;

	// imprimir os valores do vetor
	for(i = 0; i < n; i++){
		cout << * p << " ";
		p ++;
	}
	cout << endl;
	
	delete[] v;

	return 0;
}
