#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream arqin; //Ler arquivo
	string nome_arquivo; // nome do arquivo
	string linhas;//mostrar  oque tem em cada linha 
	
	//ler o nome do quivo 
	getline(cin >> ws,nome_arquivo);
	
	//Abrir aqrquivo 
	arqin.open(nome_arquivo.c_str(),ifstream:: in);
	
	while(getline(arqin,linhas))
	{
	cout << linhas << endl;
	}
	
	//fechar arquivo
	arqin.close();
	
	
	return 0;
}