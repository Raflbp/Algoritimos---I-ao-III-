#include <iostream>
#include <iomanip>
using namespace std;

//struct
struct aluno {
	int NP1;
	int NP2;
	int NP3;
	int NP4;
	float media;
};

int main() {
	aluno *v = NULL; //ponteiro para a struct
	v = new aluno; 
	
	// entrada nas notas
	cin >> v->NP1;
	cin >> v->NP2;
	cin >> v->NP3;
	cin >> v->NP4;
	
	// calculo da media 
	v-> media =	(v->NP1 + v->NP2 + v->NP3 + v->NP4) / 4.0;

	// saida das notas
	cout << setprecision(4) << v->media  << endl;

	delete v;

	return 0;
}
