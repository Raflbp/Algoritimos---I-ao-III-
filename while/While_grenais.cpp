#include <iostream>
using namespace std;

int main()
{
	int i = 0;// contador
	int x;// Condição para o programa rodar novammente
	int golsGremio;//quantos gols o gremio fez na partida 
	int golsInter; // qunatos gols o inet fez na partida 
	int vitInter = 0; // numero de vitoria do inter
	int vitgremio = 0; // numero de viroias do gremio
	int empate = 0; // numero de empares 
	  
	cin >> golsInter;
	cin >> golsGremio;
	  
	
	while(x != 2)
	{
		i++;
	
		if(golsGremio > golsInter)
			vitgremio++;
		
		else if(golsGremio < golsInter)
			vitInter++;
		
		else if(golsGremio == golsInter)
			empate++;
		
		
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> x;
		
		if(x == 1){
		cin >> golsInter;
		cin >> golsGremio;
		}
	}
	   
	   	
	cout << i << " grenais" << endl;
	cout << "Inter:" << vitInter << endl;
	cout << "Gremio:" << vitgremio << endl;
	cout << "Empates:" << empate <<endl;
	
	if (vitInter > vitgremio)
		cout << "Inter venceu mais" << endl;
	
	else if(vitInter < vitgremio)
		cout <<"Gremio venceu mais" << endl;
	
	else 
		cout << "Empate" << endl;
	
	
	return 0;
}