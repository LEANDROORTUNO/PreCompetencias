#include<iostream>
#include<vector>
using namespace std;
int  main()
{
    //158A Next Round

    /* n y k = n es el numero de participantes
    k es el puntaje a superar para la siguiente ronda
    c es el contador*/

    int n , k, contador = 0; cin >> n >> k ;
    int* LPuntajes = new int [n];
    //bulcle para llenar en la lista los puntajes
    for(int i = 0; i < n ; i++)
    {
        cin >> LPuntajes[i];
    }
    //puntaje_k = a puntaje a comparar ya que la lista comienza en 0
    int puntaje_k = LPuntajes[k - 1];
    for(int i = 0; i < n ; i++ )
    {
        if(LPuntajes[i] >= puntaje_k && LPuntajes[i] > 0)
        {
            contador++;
        }
    }


    cout << contador << endl;
    delete [] LPuntajes;
}
