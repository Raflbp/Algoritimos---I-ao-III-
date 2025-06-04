#include <iostream>
#include <cmath>
using namespace std;
 
int hash_aux(int k, int m) {

    int h = k % m;

    if (h < 0) h += m;
    return h;

}

int hash2(int k, int i, int m, int c1, int c2){
	
	return (hash_aux(k,m)+ (c1 * i) + (c2 * i * i )) % m;
}
 
int main() {
	
	int k;
	int m; //tamnho 
	int c1,c2;
	int resut; // resultado
	
	cin >> k >> m >> c1 >> c2;
	
	for(int i = 0; i < m; i++)
	{
		
		resut = hash2(k,i,m,c1,c2);
		cout << resut << " " ; 	
	}

    return 0;
}
 
 
 