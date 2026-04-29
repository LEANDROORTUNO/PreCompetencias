#include<iostream>
using namespace std;
int main()
{
    // m = filas ; n = columnas
    int m,n; cin >> m >> n;
    
    //Areea domino
    int area = 2 * 1;

    int numeropiezas = (m * n) / area;

    cout << numeropiezas << endl;
}
