#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

bool verificar(const vector<vector<char>>& matriz, int filas, int columnas){
	bool res = true;
	int colum = columnas;
	int fil = filas;
	for(int i = 1; (i <= 8) && (res); i++){
		switch(i){
			case 1:
				colum = columnas;
				fil = filas - 1;
				break;
			case 2:
				colum = columnas;
				fil = filas + 1;
				break;
			case 3:
				colum = columnas - 1;
				fil = filas;
				break;
			case 4:
				colum = columnas + 1;
				fil = filas;
				break;
			case 5:
				colum = columnas + 1;
				fil = filas + 1;
				break;
			case 6:
				colum = columnas - 1;
				fil = filas - 1;
				break;
			case 7:
				colum = columnas + 1;
				fil = filas - 1;
				break;
			case 8:
				colum = columnas - 1;
				fil = filas + 1;
				break;
		}

		if(matriz[fil][colum] != 'O'){
			res = false;
		}
	}

	return res;
}

string buscarTesoros(const vector<vector<char>>& matriz){
	string res = "";
	int cant = 0, fil, colum;
	for(int i = 1; i < matriz.size() - 1; i++){
		for(int j = 1; j < matriz[0].size() - 1; j++){
			if(matriz[i][j] == '0'){
				if(verificar(matriz, i, j)){
					cant += 1;
					colum = j;
					fil = i;
				}
			}
		}
	}

	if(cant == 0){
		res = "Oh no!";
	}else if(cant == 1){
		res = to_string(fil + 1) + " " + to_string(colum + 1);
	}else{
		res = "Oh no! " + to_string(cant) + " locations";
	} 

	return res;
}

vector<vector<char>> llenarMatriz(int filas, int columnas){
	vector<vector<char>> matriz(filas, vector<char>(columnas));

	for(auto& f : matriz){
		for(char& c : f){
			cin >> c;
		}
	}

	return matriz;
}

int main(){
	int filas, columnas;
	cin >> filas >> columnas;
	vector<vector<char>> matriz;

	matriz = llenarMatriz(filas, columnas);

	cout << buscarTesoros(matriz) <<  endl;

}