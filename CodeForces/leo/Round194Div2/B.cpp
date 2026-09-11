#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void mostrar(vector<long long>& respuestas){
	for(long long n :  respuestas){
		cout << n << "\n";
	}
}

	

long long resolver(long long empleados, long long proyectos, long long meses) {
    long long res = 0;
    long long i = 1;

    while (i <= meses) {
        res += proyectos % empleados;
        
        empleados++;
        proyectos++;
        i++;
    }

    return res;
}

int main(){
	int numero_casos;
	long long empleados, proyectos, meses;
	vector<long long> respuestas;

	cin >> numero_casos;
	for(int i = 1; i <= numero_casos; i++){
		cin >> empleados >> proyectos >> meses;
		respuestas.push_back(resolver(empleados, proyectos, meses));
	}
	mostrar(respuestas);
}