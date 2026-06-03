#include<iostream>
#include<vector>
#include<string>

using namespace std;

void mostrar(vector<int> vector){
	for(int n : vector){
		cout << n << endl;
	}
}

int buscar_Valor_Mas_Alto(vector<int> vector){
	int mayor = 0;
	for(int  num : vector){
		if(num > mayor){
			mayor = num;
		}
	}
	return mayor;
}

int buscar_Multiplo_10(int numAlto, int indice, int cantidad){
	if(indice != cantidad){

		if(numAlto % 10 == 0){
			numAlto += 10;
		}else{	
			while(numAlto % 10 != 0){
				numAlto += 1;
			}
		}
	}	

	return numAlto;
}


int main(){
	vector<int> lista_Limites;
	int cantidad, valor_Mas_Alto, valor_Multiplo_10, conversor;
	string limites;

	cin >> cantidad;

	for(int i = 1; i <= cantidad; i++){
		cin >> limites;

		if(limites == "/"){
			valor_Mas_Alto = buscar_Valor_Mas_Alto(lista_Limites);
			valor_Multiplo_10 = buscar_Multiplo_10(valor_Mas_Alto, i, cantidad);
			lista_Limites.push_back(valor_Multiplo_10);
		}else{
			conversor = stoi(limites);
			lista_Limites.push_back(conversor);
		}
	}

	mostrar(lista_Limites);
}