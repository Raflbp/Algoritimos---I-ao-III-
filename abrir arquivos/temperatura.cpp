#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	ifstream arqIn; //Ler o arquivo
	string nomea_aquivo; //nome do arquivo
	double temp;// todas as temperatudas
	double med=0;// media
	double soma = 0;
	int quant=0;// quantidade de temperatras  medidas

	//ler o nome do arquivo
	getline(cin >> ws, nomea_aquivo);
	
	//Abrindo arquivo para leitura
	arqIn.open(nomea_aquivo.c_str(), ifstream:: in);

	//ler oque esta dentro do arquivo  e armazenar no vetor
	while (arqIn >> temp)
	{
		soma += temp;
		quant++;
	}
	med = soma / quant;
	

	//Fechando arquivo
	arqIn.close();

	//saida da media
	cout << fixed << setprecision(2) << "Temperatura media: " << med << " graus" << endl;;


	return 0;
}
