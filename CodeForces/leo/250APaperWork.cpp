#include <iostream>
#include <vector>

using namespace std;

vector<int> resolver(const vector<int>& informes){
	int contador_informes, contador_negativos, contador_dias;
	vector<int> respuesta;

	contador_dias = contador_negativos = 0;
	contador_informes = 1;

	for(int n : informes){
		contador_dias += 1;

		if(n < 0){
			contador_negativos += 1;

		}

		if(contador_negativos > 2){
			contador_informes += 1;

			respuesta.push_back(contador_dias - 1);
			contador_dias = 1;
			contador_negativos = 1;
		}

	}	

	respuesta.push_back(contador_dias);
	respuesta.push_back(contador_informes);


	return respuesta;
}


void mostrar(vector<int>& res){
	int ultimo_elemento = res.at(res.size() - 1);

	res.erase(res.begin() + (res.size() - 1));

	cout << ultimo_elemento << endl;

	cout << res[0];
	for(int i = 1; i < res.size(); i++){
		cout << " " << res[i];
	}

	cout << endl;
}

int main(){
	int cantidad_dias, aux;
	vector<int> informes, res;

	cin >> cantidad_dias;

	for(int i = 1; i <= cantidad_dias; i++){
		cin >> aux;
		informes.push_back(aux);
	}

	res = resolver(informes);
	mostrar(res);

}