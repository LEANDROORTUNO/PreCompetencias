#include <iostream>
#include <vector>

using namespace std;

int buscarElemento(vector<int> lista, int elemento){
	int res = -1;
	bool encontrado = false;
	int izquierda = 0;
	int derecha = lista.size() - 1;
	int medio = 0;

	while(!(encontrado) && izquierda <= derecha ){
		medio = izquierda + (derecha - izquierda) / 2;
		if(lista[medio] == elemento){
			encontrado = true;
			res = medio;

		}else if(lista[medio] < elemento){
			izquierda = medio + 1;

		}else{
			derecha = medio - 1;
		}
	}
	return res;

}

int main(){
	vector<int> list = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

	int indice = buscarElemento(list, 7);

	cout << indice;
}