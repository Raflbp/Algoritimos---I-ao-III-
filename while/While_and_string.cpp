#include <iostream>
#include <string>
using namespace std;

int main()
{
	string senha;
	
	cout <<"Digite a senha:" << endl;
	getline(cin >> ws, senha);//l� uma string
	
	while((senha != "Inatel"))
	{
		cout <<"voc� errou" << endl;
		cout <<"Senha de novo meu chapa:" << endl;
		getline(cin >> ws, senha);//l� uma string	
	}
	cout << "Enter nigth" << endl;
	
	return 0;
}