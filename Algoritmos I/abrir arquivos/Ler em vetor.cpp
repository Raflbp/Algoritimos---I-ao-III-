#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream arqin; // var para ler o arquivo
	string nomearq; // nome do arquivo 
	int x[10];
	int i;
	int N;
	
	//lendo nome do arquivo a se lido 
	getline(cin >> ws, nomearq);
	
	//abrindo arquivo para leitura 
	arqin.open(nomearq.c_str(), ifstream::in);
	
	//Lendo dados do arquivo
	i = 0;
	while(!arqin.eof())
	{
		arqin >> x[i];
		i++;
	}
	
	N = i;
	
	for( i = 0; i < N;i++)
		cout << x[i] << endl;
	
	// fechar o arquivo
	arqin.close();
	
	return 0;
}