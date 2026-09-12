#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> lista_dias;


void mostrar(){
	sort(lista_dias.begin(), lista_dias.end());

	for(int n : lista_dias){
		cout << n << " ";
	}

	cout << "\n";
}

bool esta(int aux){
	for(int n : lista_dias){
		if(n == aux){
			return true;
		}
	}

	return false;
}

void resolver(int valor_minimo, int valor_maximo){
	
	int aux = lista_dias.at(0);
	if(esta(valor_minimo) && esta(valor_maximo)){	
		
		while(aux <= valor_maximo){
			if(!esta(aux)){
				lista_dias.push_back(aux);
				
			}

			aux++;
		}
	}else{
		lista_dias.clear();
		lista_dias.push_back(-1);
	}
}


int main(){
	int dias_registrados, valor_minimo, valor_maximo, n;

	cin >> dias_registrados >> valor_minimo >> valor_maximo;

	for(int i = 1; i <= dias_registrados - 1; i++){
		cin >> n;

		lista_dias.push_back(n);
	}

	resolver(valor_minimo, valor_maximo);
	mostrar();

}