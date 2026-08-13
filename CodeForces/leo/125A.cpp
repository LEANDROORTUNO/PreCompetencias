#include<iostream>

using namespace std;

int main(){

	int n, numero_pulgadas, numero_pies, acarreo;

	cin >> n;

	numero_pulgadas = (n + 1) / 3;

	numero_pies = numero_pulgadas / 12;
	acarreo = numero_pulgadas % 12;

	cout << numero_pies << " " << acarreo << endl;
}