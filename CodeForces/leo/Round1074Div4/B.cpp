#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int length_list;
vector<int> list;
vector<int> answers;
vector<int> sublist;


int searchMax(){
	return *max_element(list.begin(), list.end());
}

void resolve(){
	int res = 0;
	for(int aux : list){
		sublist.push_back(aux);
		res += searchMax();
	}

	answers.push_back(res);
}


void createlist(){
	int aux;

	for(int i = 1; i <= length_list; i++){
		cin >> aux;
		list.push_back(aux);
	}
}

void show(){
	for(int aux : answers){
		cout << aux << endl;
	}
}

int  main(){
	int number_cases;

	cin >> number_cases;

	for(int i = 1; i <= number_cases; i++){
		cin >> length_list;

		createlist();

		resolve();

		sublist.clear();
		list.clear();
	}

	show();
}