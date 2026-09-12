#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<char> lista_vocales;


bool estaVocal(char caracter){
	for(char c : lista_vocales){
		if(caracter == c){
			return true;
		}
	}

	return false;
}

int main(){

	string cadena;
	int conteo_primero, conteo_segundo, conteo;

	conteo_primero = conteo_segundo = 0;
	conteo = 1;

	lista_vocales = {'a','e','i','o','u','y'};

	cin >> cadena;

	for(char caracter : cadena){
		if(conteo == 1 && caracter != 'y' && estaVocal(caracter)){
			conteo_primero++;
			conteo_segundo++;
		}else{
			if(caracter == 'y'){
				conteo_segundo++;
			}		
		}
	}

	cout << conteo_primero << " " << conteo_segundo << "\n";
}