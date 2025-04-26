#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream arqin; // var para ler o arquivo
	string nomearq; // nome do arquivo 
	int x;
	float pi;
	string linha;
	
	//lendo nome do arquivo a se lido 
	getline(cin >> ws, nomearq);
	
	//abrindo arquivo para leitura 
	arqin.open(nomearq.c_str(), ifstream::in);
	
	//Lendo dados do arquivo
	arqin >> x;
	arqin >> pi;
	getline(arqin >> ws,linha);
	
	cout << "x = " << x << endl;
	cout << "pi = " << pi << endl;
	cout << "linha = " <<linha << endl;
	
	// fechar o arquivo
	arqin.close();
	
	return 0;
}