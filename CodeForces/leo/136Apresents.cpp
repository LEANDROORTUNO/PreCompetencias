#include <iostream>
#include <vector>

using namespace std;

vector<int> ordenar(vector<int> &lista){
	vector<int> aux;

	for(int i = 0; i < lista.size(); i++){
		int num = i + 1;
		for(int j = 0; j < lista.size(); j++){
			if(num == lista.at(j)){
				aux.push_back(j + 1);
			}
		}
	}

	return aux;
}

void mostrar(vector<int> list){
	for(int n : list){
		cout << n << " ";
	}
}

int main(){
	int num;
	vector<int> listaNumeros, res;

	cin >> num;

	for(int i = 0; i < num; i++){
		int n;
		cin >> n;
		listaNumeros.push_back(n);
	}
	res = ordenar(listaNumeros);

	mostrar(res);

}