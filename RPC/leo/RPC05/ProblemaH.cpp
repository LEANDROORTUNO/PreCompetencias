#include <iostream>
#include <string>
#include <vector>

using namespace std;

string obtenerFase(int dia){
	string res = "";
	if(dia == 0){
		res = "New";
	}else if((dia >= 1 && dia <= 4) || (dia >= 23 && dia <= 27)){
		res = "Crescent";
	}else if((dia >= 5 && dia <= 8) || (dia >= 20 && dia <= 22)){
		res = "Quarter";
	}else if((dia >= 9 && dia <= 13) || (dia >= 15 && dia <= 19)){
		res = "Gibbous";
	}else if(dia == 14){
		res = "Full";
	}

	return res;
}

int calcularDias(int cant, const vector<string>& listAnotaciones){
	int res = -1, numViaje, diaSimulado;
	bool hipotesis;
	string faseTeorica;

	for(int i = 1; i <= 28; i++){
		hipotesis = true;
		for(int j = 0; j< cant; j++){
			numViaje = j + 1;
			diaSimulado = (numViaje * i) % 28;

			faseTeorica = obtenerFase(diaSimulado);

			if(faseTeorica != listAnotaciones[j]){
				hipotesis = false;
			}
		}

		if(hipotesis){
		return i;
		}
	}

	return res;
}


int main(){
	int cant;
	cin >> cant;
	vector<string> listAnotaciones(cant);

	for(int i = 0; i < cant; i++){
		cin >> listAnotaciones[i];
	}

	cout << calcularDias(cant, listAnotaciones) << endl;

}