#include<iostream>
#include<iterator>

using namespace std;

const int valorMAX = 105;

bool verificar(char caracter){
	bool res = false;
	char lista_colores[] = {'C', 'M', 'Y'};

	for(char carac : lista_colores){
		if(caracter == carac){
			res = true;
		}
	}

	return res;
}

template<size_t N, size_t M>
string resolver(const char (&matriz)[N][M], int filas, int columnas){
	string res = "#Black&White";
	bool veri = false;

	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			if(verificar(matriz[i][j])){
				return "#Color";
			}
		}	
	}
	
	return res;
}

template<size_t N, size_t M>
void llenar(char (&matriz)[N][M], int filas, int columnas){

	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			cin >> matriz[i][j];
		}	
	}
}

int main(){

	
	int n, m;
	string respuesta;

	cin >> n >> m;

	char matriz[valorMAX][valorMAX];

	llenar(matriz, n, m);

	respuesta = resolver(matriz, n, m);

	cout << respuesta << endl;

}