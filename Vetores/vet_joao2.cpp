		#include <iostream>
		#include <iomanip>
		using namespace std;
		
		int main()
		{
			int n; // numero de casos
			int vetx[100]; // numeros guardados no vetor x
			int vety[100]; // numeros guardados no vetor y
			char carac[100]; // caracteres, para as  equações
			int i; // contador
			float soma , mult, div, sub; // soma, multiplicacao,divisao e subtracao
			
			//quantidade de casos 
			cin >> n;
		
			//entrada nos numeros em x
			for(i = 0; i < n; i++)
			{
				cin >> vetx[i];
			}
			
			// entrada nos numeros em y
			for(i = 0; i < n; i++)
			{
				cin >> vety[i];
			}
			
			// entrada nos caracteres 
			for(i = 0; i < n; i++)
			{
				cin >> carac[i];
			}
			
			// respostas de cada
			for(i = 0; i < n; i++)
			{
				if(carac[i] == '+'){
					soma = vetx[i] + vety[i];
					cout << fixed << setprecision(0) <<vetx[i] << " + " << vety[i] << " = " << soma << endl;
				}
				else if(carac[i] == '-'){
					sub = vetx[i] - vety[i];
					cout << fixed << setprecision(0) <<vetx[i] << " - " << vety[i] << " = " <<  sub << endl;
				}
				 
				else if(carac[i] == '*'){
					mult = vetx[i] * vety[i];
					cout <<fixed << setprecision(0) vetx[i] << " * " << vety[i] << " = " << mult  << endl;
				}
				else if(carac[i] == '/'){
					div = (float)vetx[i] / (float)vety[i];
					cout << vetx[i] << " / " << vety[i] << " = ";
					cout << fixed << setprecision(2) << div << endl;
				}
			}
		
			return 0;
		}
