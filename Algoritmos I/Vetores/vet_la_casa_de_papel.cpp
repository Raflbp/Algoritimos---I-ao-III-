#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int N;// numero de pessoas pesquisadas
	int opiniao[1005];//reacoes de cada pessao
	int i,j = 0,k = 0;// contadores 
	
	//entrada
	cin >> N;
	 
	for(i = 0; i < N; i++)
	{
		cin >> opiniao[i];
		
		if(opiniao[i] == 1){
			j++;;
		}
		
		if(opiniao[i] == -1){
			k++;		
		} 
	}
	
	// saida 
	if(j ==k)
		cout << "Deu empate" << endl;
	
	else if(j > k)
		cout <<"A maioria gostou" << endl;
	
	else
		cout <<"A maioria nao gostou" << endl;
		
	return 0;
}