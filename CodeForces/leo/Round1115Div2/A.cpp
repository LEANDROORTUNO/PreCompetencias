#include <iostream>
#include <vector>

using namespace std;

int cards_number;
vector<int> cards_list;
vector<int> answers;


void mostrar(){
	for(int aux : answers){
		cout << aux << endl;
	}
}

int all_sum(){
	int sum_total = 0;
	for(int aux : cards_list){
		sum_total += aux;
	}

	return sum_total;
}


bool all_same(){
	bool respuesta = true;
	int aux = cards_list.at(0);
	
	for(int i = 1; i < cards_list.size(); i++){
		if(aux != cards_list.at(i)){	
			respuesta = false;
		}

		aux = cards_list.at(i);
	}

	return respuesta;
}


void resolve(){
	int answer;

	if(cards_list.size() == 1){
		answer = cards_list.at(0);
	}else if(all_same()){
		answer = cards_list.at(0) + cards_list.at(1);	
	}else{
		answer = all_sum();
	}	

	answers.push_back(answer);
}


void add_Cards(){
	for(int i = 0; i < cards_number; i++){
		int card_power; cin >> card_power;

		cards_list.push_back(card_power);
	}
}


int main(){
	int test_cases;

	cin >> test_cases;

	for(int i = 0; i < test_cases; i++){
		cin >> cards_number;

		add_Cards();

		resolve();

		cards_list.clear();
	}

	mostrar();
}