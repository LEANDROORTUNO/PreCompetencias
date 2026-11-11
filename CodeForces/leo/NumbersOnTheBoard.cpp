#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

vector<int> rango_numeros;
vector<int> respuestas;
vector<int> subvector;
int numero_casos;



void armar_rango(int inicio, int fin){
	rango_numeros.push_back(inicio);

	while(inicio < fin){
		inicio++;
		rango_numeros.push_back(inicio);
	}
}


int suma_elementos(){
	int suma_elementos = 0;

	for(int numero : rango_numeros){
		suma_elementos += numero;
	}

	return suma_elementos;
}


bool puros_positivos(){
	bool res = true;
	for(int numero : rango_numeros){
		if(numero < 0){
			res = false;
		}
	}

	return res;
}

int eliminar_anteriores(){
	int res = 0;

	if(rango_numeros.front() == 0){
		res = rango_numeros.size() - 2;
	}else{
		res = rango_numeros.size() - 1;
	}

	return res;
}

bool existe_secuencia(){
	bool existe1, existe2, existe, existee;

	existe1 = binary_search(rango_numeros.begin(), rango_numeros.end(), -1);
	existe2 = binary_search(rango_numeros.begin(), rango_numeros.end(), -2);
	existe  = binary_search(rango_numeros.begin(), rango_numeros.end(), 1);
	existee = binary_search(rango_numeros.begin(), rango_numeros.end(), 2);

	return existe1 && existe2 && existe && existee;
}


void resolver(int inicio, int fin){
	int contador_eliminados, suma_eliminados, ultimo_subVector;

	contador_eliminados = suma_eliminados = 0;

	//para casos 1, 4 y 5
	if(suma_elementos() == 0 || suma_elementos() == fin){
		respuestas.push_back(0);
	}else{ //casos 2, 3, 6, 7 y 8
		if(puros_positivos()){// caso 2 y 8
			respuestas.push_back(eliminar_anteriores());
		}else{ //3, 6 y 7
			if(existe_secuencia()){ //6 y 7
				if(inicio == -2){
					contador_eliminados = (fin  - 2) - 1;
				}else{
					contador_eliminados = (abs(-2 - inicio)) - 1;
				}
				respuestas.push_back(contador_eliminados);

			}else{ //3
				respuestas.push_back(rango_numeros.size() - 1);
			}
		}
	}

	subvector.clear();
}



void mostrar_respuesta(){
	for(int numero : respuestas){
		cout << numero << endl;
	}
}


int main(){
	int l, t;

	cin >> numero_casos;

	for(int i  = 0; i < numero_casos; i++){
		cin >> l >> t;

		armar_rango(l, t);

		resolver(l, t);

		rango_numeros.clear();
	}


	mostrar_respuesta();

}