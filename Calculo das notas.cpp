#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float p1, p2, np1, np2;
    float npa = 0;
    float ex1, ex2;

    cin >> p1 >> ex1;
    cin >> p2 >> ex2;

    np1 = (0.8 * p1) + (0.2 * ex1);
    np2 = (0.8 * p2) + (0.2 * ex2);

    npa = (np1 + np2) / 2;


    cout << "NP1 = " << round(np1) << endl;
    cout << "NP2 = " << round(np2) << endl;
    cout << "NPA = " << round(npa) << endl;

    if(npa >= 60)
        cout << "Nao precisa de NP3" << endl;
    else
        cout << "Precisa de NP3" << endl;

    return 0;
}