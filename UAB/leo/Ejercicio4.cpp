#include <iostream>
#include <vector>

using namespace std;

void llenar(vector<char> aux, vector<char> &lista){
	for(char c : aux){
		lista.push_back(c);
	}
}

vector<char> ordenar(vector<char> lista){
	vector<char> nuevaLista;
	vector<char> aux;
	vector<char> aux1;
	vector<char> aux2;

	for(char c : lista){
		if(c == 'R'){
			aux.push_back(c);
		}else if(c == 'G'){
			aux1.push_back(c);
		}else{
			aux2.push_back(c);
		}
	}
	llenar(aux, nuevaLista);
	llenar(aux1, nuevaLista);
	llenar(aux2, nuevaLista);
	
	return nuevaLista;
}

void mostrar(vector<char> lista){
	cout << "[" << lista.at(0);

	for(int i = 1; i < lista.size(); i++){
		if(i == lista.size() - 1){
			cout << ", " << lista.at(i) << "]";
		}else{
			cout << ", " << lista.at(i);
		}
	}
}

int main(){
	vector<char> lista = { 'G', 'B', 'R', 'R', 'B', 'R', 'G'};
	vector<char> ordenado = ordenar(lista);

	mostrar(ordenado);
}