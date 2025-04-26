#include <iostream>
#include <string>
using namespace std;

int main()
{
	string senha;//senha
	
	cin >> senha ;
	
	while(senha != "2002")
	{
		cout << "Senha Invalida" << endl;
		cin >> senha;
	}
	cout << "Acesso Permitido" << endl;
	
	return 0;
}