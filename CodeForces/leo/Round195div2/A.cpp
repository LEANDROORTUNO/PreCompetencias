#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int chesee, sausage;
vector<int> respuestas;


void resolver(){
	int answer;
	if(sausage >= chesee){
		answer = -1;
	}else{	
		answer = min(sausage, chesee - sausage);
	}	

	respuestas.push_back(answer);
}



void mostrar(){


	for(int aux : respuestas){
		cout << aux << endl;
	}
}

int main(){
	int test_cases;

	cin >> test_cases;

	for(int i = 1; i <= test_cases; i++){
		cin >> chesee >> sausage;

		resolver();
	}	

	mostrar();
}