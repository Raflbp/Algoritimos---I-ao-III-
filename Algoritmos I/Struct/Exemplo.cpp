#include <iostream>
#include <string>
using namespace std;

struct dados
{
	string nome;
	int idade;
};


int main()
{
	dados atleta; // tipo dados
	
	getline(cin >> ws, atleta.nome);;
	cin >> atleta.idade;
	
	cout << "Nome: " << atleta.nome << endl;
	cout << "Idade: " << atleta.idade << endl;
	
	if(atleta.idade >= 18)
		cout << "Atleta maior de idade." << endl;
	else
		cout << "De meno, mane" << endl;
	return 0;
}