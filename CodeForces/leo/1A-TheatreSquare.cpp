#include<iostream>
using namespace std;
int main()
{
    //Problema 1A Theatre Square
    long long n, m, a; cin >> n >> m >> a;

    //formulas para baldosas ancho
    long long baldosasancho = (n + a - 1)/a;

    //formulas para baldosas largo
    long long baldosaslargo = (m + a - 1)/a;

    //formula para resultado
    long long resultado = baldosasancho * baldosaslargo;
    cout << resultado << endl;
}
