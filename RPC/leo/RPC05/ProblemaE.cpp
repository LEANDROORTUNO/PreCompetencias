#include <iostream>
#include <string>
#include <iterator>
#include <vector>

using namespace std;

string generarPalabra(const vector<vector<char>>& matriz, int fil, int colum){
	string palabra = "";
	int columnas = colum;
	int filas = fil;
	for(int i = 0; i < columnas; i++){
		for(int j = 0; j < filas; j++){
			if(matriz[j][i] != '.'){
				palabra += matriz[j][i];
			}
		}
	}
	return palabra;
}


vector<vector<char>> llenarMatriz(int filas, int columnas){
	vector<vector<char>> matriz(filas, vector<char>(columnas)) ;
	string cadena;
	for(int i = 0; i < filas; i++){
		cin >> cadena;
		for(int j = 0; j < columnas; j++){
			matriz[i][j] = cadena.at(j); 
		}
	}
	return matriz;
}

int main(){
	int n, m;
	cin >> n >> m;
	vector<vector<char>> matriz(n, vector<char>(m));

	matriz = llenarMatriz(n,m);

	cout << generarPalabra(matriz,n ,m) << endl;
}