#include <iostream>
using namespace std;

int main()
{
	int x,y; // entrada
	int b, c;// armazenar valor de x e y
	int maiorX; // o maior numero em x 
	int maiorY;// o maior numeor em y  
	int maiorXY;// o meior numero no total
	
	//entrada de x e de y.
	cin >> x >> y;

    // atribuicao de b e c para x e y.
	b = x;
	c = y;
	maiorX = 0;
	maiorY = 0;
	maiorXY = 0;
	
	//teste de x
	while(x != 1)
	{
		if(x % 2 == 0)
			x = x / 2;
		
		else if(x % 2 != 0)
			x = (x * 3) + 1;
		
		if(x > maiorX)
			maiorX = x;
		
	}
    
    // teste de y
	while(y != 1)
	{
		if(y % 2 == 0)
			y = y / 2;
		
		else if (y % 2 != 0)
			y = (y * 3) + 1;
		cout << y << endl;
		 
		if(y > maiorY)
			maiorY = y;
	}
	
    //O maior entre x e y
	if(maiorX > maiorY)
		maiorXY = maiorX;
	
	else if(maiorX < maiorY)
		maiorXY = maiorY;
	
	else if(maiorX == maiorY)
		maiorXY = maiorY;
	
	//saida
	cout << b << "  " << c << "  " << maiorXY << endl;

	return 0;
}
