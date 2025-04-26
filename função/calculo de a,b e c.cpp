#include<iostream>
#include <cmath>
using namespace std;

int calc_a(int x)
{
	int a1;
	a1 =  2 * pow(x,2) + 3 * x - 1;
	return a1;
}

int calc_b(int x)
{
	int b1;
	b1 = pow(x,3);
	return  b1;
}

int calc_c(int y)
{
	int c1;
	c1 = pow(y,3);
	return c1;
}

int main()
{
    int a,b,c,x,y;
    
    cin >> x >> y;
    
    a = calc_a(x);
    cout << "a = " << a << endl;
    
	b = calc_b(x);
    cout << "b = " <<b << endl;
    
    c = calc_c(y);
    cout <<"c = " <<c << endl;
    return 0;
}