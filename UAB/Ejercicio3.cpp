#include <iostream>
#include <string>
using namespace std;

bool mismoTamano(string cad1, string cad2){
	return cad1.length() == cad2.length();
}

int cantidadCaracter(string cadena, char caracter){
	int res = 0;
	for(char x : cadena){
		if(x == caracter){
			res++;
		}
	}
	return res;
}

bool mismaCantidad(string cadena1, string cadena2){
	bool res = true;
	if(mismoTamano(cadena1, cadena2)){
		for(char c : cadena1){	
			int cantCaracter1 = cantidadCaracter(cadena1 , c);
			int cantCaracter2 = cantidadCaracter(cadena2, c);
			if(!(cantCaracter1 == cantCaracter2)){
				res = false;
			}
		}
	}else{
		res = false;
	}
	return res;
}

int main(){
	string s, g, t, res;
	res = "false";
	cin >> s >> g >> t;

	bool mismoTamaSG = mismoTamano(s, g);
	bool mismoTamaST = mismoTamano(s, t);
	bool mismoCantSG = mismaCantidad(s, g);
	bool mismoCantST = mismaCantidad(s, t);

	if((mismoTamaSG) && (mismoTamaST) && (mismoCantSG) && (mismoCantST)){
		res = "true";
	}

	cout << res << endl;
}