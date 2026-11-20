#include <iostream>
#include <vector>

using namespace std;

vector<int> list_of_cases;
vector<int> answers;

void mostrar(){
	for(int aux : answers){
		cout << aux << " ";
	}

	cout << "\n";
}


bool existe(int number){
	bool res = false;
	for(int i : answers){
		if(i == number){
			res = true;
		}
	}

	return res;
}

void resolve(){
	int primero, n;

	for(int aux : list_of_cases){
		if(aux == 2){
			answers.push_back(2);
			answers.push_back(1);
		}else{

			answers.push_back(2);

			for(int i = aux; i >= 1; i--){
				if(!existe(i)){
					answers.push_back(i);
				}
			}
		}

		mostrar();
		answers.clear();
	}
}


signed main(){
	int number_cases, test_cases; cin >> number_cases;

	for(int i = 1; i <= number_cases; i++){
		cin >> test_cases;
		list_of_cases.push_back(test_cases);
	}

	resolve();
}