#include <iostream>
#include <string>
#include <iterator>
#include <cmath>
using namespace std;

string construccion(int difDia, int difH, int difM){
	string res, difDiaS, difMS, difHS;
	res = "";
	difDiaS  = to_string(difDia);
	difHS  = to_string(difH);
	difMS  = to_string(difM);
	if(difDia == 0 || difDia == -1){
		if(difH == 0){
			res = res + difMS + " minutes";
		}else{
			if(difM == 0){
				res = res + difHS + " hours";
			}else{
				res = res + difHS + " hours and " + difMS + " minutes";
			}
		}
	}else{
		if(difH == 0){
			if(difM == 0){
				res = res + difDiaS + " days";
			}else{
				res = res + difDiaS + " days and " + difMS + " minutes";
			}
		}else{
			if(difM == 0){
				res = res + difDiaS + " days and " + difHS + " hours";
			}else{
				res = res + difDiaS + " days, " + difHS + " hours, " + difMS + " minutes";
			}
		}
	}
	return res;
}

int resta(int m1, int m2){
	int res = 0;
	if(m1 > m2){
		res = 60 - m1 + m2;
	}else{
		res = abs(m1 - m2);
	}
	return res;
}

int restaH(int h1, int h2){
	int res = 0;
	if(h1 > h2){
		res = 24 - h1 + h2;
	}else{
		res = abs(h1 - h2);
	}
	return res;
}

int comparacion(string dia1, string dia2, string lista[], int tamLista){
	int res = 0;
	for(int i = 0; i < tamLista; i++){
		if(lista[i] == dia1){
			for(int j = i; j < tamLista; j++){
				if(lista[j] == dia2){
					res = abs(i - j) - 1;
				}
			}
			if(res == 0){
				for(int j = 0; j < tamLista; j++){
					if(lista[j] == dia2){
						j += 7;
						res = abs(i - j) - 1;
					}
				}
			}
		}
	}
	return res;
}

int desgloceM(string cadena){
	string res = "";
	for(int i = 7; i < 9; i++){
		res += cadena.at(i);
	}
	return stoi(res);
}

int desgloceH(string cadena){
	string res = "";
	for(int i = 4; i < 6; i++){
		res += cadena.at(i);
	}
	return stoi(res);
}

string desgloceDia(string cadena){
	string res = "";
	for(int i = 0; i < 3; i ++){
		res += cadena.at(i);
	}
	return res;
}

string ejercicio(string cadena1, string cadena2){
	string dia1, dia2;
	int difDia, difH, difM, hora1, hora2, min1, min2, tamLista;
	string lista[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
	tamLista = size(lista);

	dia1 = desgloceDia(cadena1);	
	dia2 = desgloceDia(cadena2);
	hora1 = desgloceH(cadena1);
	hora2 = desgloceH(cadena2);
	min1 = desgloceM(cadena1);
	min2 = desgloceM(cadena2);
	difDia = comparacion(dia1, dia2, lista, tamLista);
	difH = restaH(hora1, hora2);
	difM = resta(min1, min2);

	return construccion(difDia, difH, difM);
}

int main(){
	string cadena1, cadena2, res;

	getline(cin, cadena1);
	getline(cin, cadena2);

	res = ejercicio(cadena1, cadena2);
	cout << res;
}