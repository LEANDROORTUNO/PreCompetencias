#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

#define int long long 

using namespace std;


int length_case;
vector<int> numbers;
vector<int> answers;



bool aparece_una_vez(int max){
	int contador = 0;

	for(int aux : numbers){
		if(aux == max){
			contador++;
		}
	}

	return contador == 1;
}

void resolver(){
	int max_val, total, MOD;
	vector<int> temp = numbers;

	max_val = *max_element(numbers.begin(), numbers.end());

	if(aparece_una_vez(max_val) && size(numbers) > 1){
		if(size(numbers) == 2){
			answers.push_back(max_val);
		}else{ 
			sort(temp.begin(), temp.end());
			
			total = 1;
			MOD = 1e9 + 7;
			
			for (int i = 1; i < temp.size(); i++) {
				int diff = temp[i] - temp[i - 1];
				if (diff > 0) {
					total = (total * (diff + 1)) % MOD;
				}
			}
			
			answers.push_back(total);
		}

	}else{
		answers.push_back(1);
	}
}

void mostrar(){
	for(int aux : answers){
		cout << aux << "\n";
	}
}

signed main(){
	int number_cases, aux;

	cin >> number_cases;

	for(int i = 0; i < number_cases; i++){
		cin >> length_case;

		for(int i = 0; i < length_case; i++){
			cin >> aux;
			numbers.push_back(aux);
		}

		resolver();
		numbers.clear();
	}

	mostrar();
}