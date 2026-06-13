#include <iostream>

using namespace std;

int calcularPila(long long peso, int cantPilas){
	int difPesoOroTunsteno, pila;
	long long cantMonedasBalanza, pesoEsperado;
	long pesoTunsteno;

	difPesoOroTunsteno = 110;
	pesoTunsteno = 29260;
	cantMonedasBalanza = (cantPilas * (cantPilas + 1))/2;
	pesoEsperado = cantMonedasBalanza * pesoTunsteno;
	pila = (peso - pesoEsperado)/ difPesoOroTunsteno;
	
	return pila;
}


int main(){
	long long peso;
	int cantPilas;
	cin >> peso >> cantPilas;

	cout << calcularPila(peso, cantPilas) << endl;
}