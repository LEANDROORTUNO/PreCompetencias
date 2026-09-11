#include <iostream>
#include <vector>
#include <iterator>

using namespace std;


void mostrar(vector<int>& respuestas){
	for(int n : respuestas){
		cout << n << endl;
	}
}
	

int respuesta(vector<int>& lista_casos){
	int tamano_lista, res, numero_ceros;
	tamano_lista = size(lista_casos);
	res = 0;
	numero_ceros = 0;

	for(int n : lista_casos){
		if(n == 0){
			numero_ceros++;
		}
	}

	if(numero_ceros >= 2){
		if(lista_casos.at(0) == 1){
			res++;
		}
		if(lista_casos.at(tamano_lista - 1) == 1){
			res++;
		}
	}else{
		res = -1;
	}

	
	return res;
}

int main(){
	int numero_casos, numero_problemas, dificultad_problema;
	vector<int> lista_casos;
	vector<int> respuestas;

	cin >> numero_casos;

	for(int i = 1; i <= numero_casos; i++){
		cin >> numero_problemas;
		for(int j = 1; j <= numero_problemas; j++){
			cin >> dificultad_problema;
			lista_casos.push_back(dificultad_problema);
		}
		respuestas.push_back(respuesta(lista_casos));
		lista_casos.clear();
	}

	mostrar(respuestas);
}