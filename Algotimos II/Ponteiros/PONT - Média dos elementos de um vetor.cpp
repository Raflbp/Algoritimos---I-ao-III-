#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int * v = NULL; //ponteiro para um vetor
	int n;// tamanho do vetor
	int i;// vonatdor
	float soma= 0;
	float media;

	cin >> n;

	v = new int[n];// alocar dinamicamente o vetor

	// lendo os valores do vetor
	for(i = 0; i < n; i++)
		cin >> v[i];


	// imprimir os valores do vetor
	for(i = 0; i < n; i++) {
		   soma += v[i];
	}

		media = soma /n;
		
	cout << setprecision(4) << media << endl;;
	
	delete[] v;

	return 0;
}
