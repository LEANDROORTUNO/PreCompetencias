#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

vector<int> lista_equipos;
vector<int> respuestas;
vector<int> escuelas;

void mostrar(){
	for(int n : lista_equipos){
		cout << n << endl;
	}
}

void resolver(int numero_clasificados, int limite_escuela){

	int contador;
	contador = 1;
	lista_equipos.push_back(respuestas.at(0));

	for(int i = 1; i < size(escuelas); i++){
		if(size(lista_equipos) < numero_clasificados){
			if(contador <= 3){
				if(escuelas.at(i) == escuelas.at(i - 1)){
					lista_equipos.push_back(respuestas(i));
				}else{
					lista_equipos.push_back(respuestas(i));
				}
			}else{
				contador = 0;
			}
		}
	}

	
}


int main(){
	int numero_equipos, numero_clasificados, limite_escuela, aux, j;

	cin >> numero_equipos >> numero_clasificados >> limite_escuela;


	for(int i = 0; i < numero_equipos; i++){
		cin >> aux1 >> aux2;

		respuestas.push_back(aux1);
		escuelas.push_back(aux2);
	}

	resolver(numero_clasificados, limite_escuela);

	mostrar();
 }