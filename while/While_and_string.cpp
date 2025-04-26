#include <iostream>
#include <string>
using namespace std;

int main()
{
	string senha;
	
	cout <<"Digite a senha:" << endl;
	getline(cin >> ws, senha);//lê uma string
	
	while((senha != "Inatel"))
	{
		cout <<"você errou" << endl;
		cout <<"Senha de novo meu chapa:" << endl;
		getline(cin >> ws, senha);//lê uma string	
	}
	cout << "Enter nigth" << endl;
	
	return 0;
}