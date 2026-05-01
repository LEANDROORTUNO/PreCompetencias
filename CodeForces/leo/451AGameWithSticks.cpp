#include <iostream>
#include <algorithm>

using namespace std;

string ganador(string jugador1, string jugador2, int totaljugadas){
	string gano = "";
	if(totaljugadas % 2 == 0){
		gano = jugador2;
	}else{
		gano = jugador1;
	}

	return gano;
}

int main(){
	string jugador1, jugador2, res;
	int filas, columnas, totaljugadas;
	jugador1 = "Akshat";
	jugador2 = "Malvika";

	cin >> filas >> columnas;
	totaljugadas = min(filas,columnas);
	res = ganador(jugador1, jugador2, totaljugadas);

	cout << res << endl;

}