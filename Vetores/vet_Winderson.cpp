#include <iostream>
using namespace std;

int main()
{
	int nVideos;// numero de videos a serem analisador
	int nVisualizacoes[1005];// numero de viazulizações
	int i,mais = 0,menos = 0; // contador

	cin >> nVideos;


	for(i = 0; i < nVideos; i++)
	{
		cin >> nVisualizacoes[i];
		
		if(nVisualizacoes[i] > 10000000)
		{
			mais++;
		}
		
		else if (nVisualizacoes[i] < 10000000)
		{
			menos++;
		}
	}

	cout << mais <<" video(s) com mais de 10M views" << endl;
	cout << menos <<" video(s) com menos de 10M views" << endl;
	
	

	return 0;
}
