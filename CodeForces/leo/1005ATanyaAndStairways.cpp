#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

void mostrar(const vector<int>& respuesta){
	int tamano_lista = size(respuesta);
	
	cout << respuesta.at(tamano_lista - 1) << endl;

	for(int i = 0; i < tamano_lista - 1; i++){
		cout << respuesta.at(i) << " ";
	}
	cout << endl;
}



vector<int> resolver(const vector<int>& lista_numeros){
	vector<int> respuesta;
	int numero_escalones, numero_pasos;
	numero_escalones = 1;

	for(int i = 0; i < size(lista_numeros); i++){
		if(lista_numeros[i] == 1 && i > 0){
			respuesta.push_back(lista_numeros[i - 1]);
			numero_escalones += 1;
		}
	}

	respuesta.push_back(lista_numeros[size(lista_numeros) - 1]);
	respuesta.push_back(numero_escalones);

	return respuesta;
}

int main(){
	int numero_pisadas, aux;
	vector<int> lista_numeros, res;

	cin >> numero_pisadas;

	for(int i= 0; i < numero_pisadas; i++){
		cin >> aux;

		lista_numeros.push_back(aux);
	}


	mostrar(resolver(lista_numeros));

}