#include <iostream>
#include <string>
#include <vector>

using namespace std;

string convertir(vector<char> list1, vector<int> list2){
	string res = "";
	for(int i = 0; i < list1.size(); i++){
		res = res + list1.at(i) + to_string(list2.at(i));
	}
	return res;
}

string respuesta(string cadena){
	vector<char> resp;
	vector<int> cantidades;
	int cantidad = 0;
	string subcadena = ""; 

	for(int i = 0; i < cadena.length(); i++){
		cantidad++;
		if(i + 1 == cadena.length() || cadena.at(i) != cadena.at(i + 1)){
			resp.push_back(cadena.at(i));
			cantidades.push_back(cantidad);
			cantidad = 0;
		}
	}
	subcadena = convertir(resp, cantidades);
	return subcadena;
}

int main(){
	string cadena, res;
	cin >> cadena;
	res = respuesta(cadena);
	cout << res;
}	