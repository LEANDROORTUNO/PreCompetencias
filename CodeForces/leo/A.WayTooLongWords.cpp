#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    // Problema A. Way Too Long Words
    int n; cin >> n;
    string* Lista = new string[n];

    for(int i= 0; i < n; i++)
    {
        cin >> Lista[i];


    }

    for(int i = 0; i < n ; i++)
    {
          if(Lista[i].length() > 10)
        {
            char PrimerLetra = Lista[i][0];
            int tamanoPalabra = Lista[i].length() - 2;
            char ultimaLetra = Lista[i].back();
            cout << PrimerLetra << tamanoPalabra << ultimaLetra << endl;

        }else
        {
            cout << Lista[i] << endl;
        }

    }
    delete[] Lista;

}
