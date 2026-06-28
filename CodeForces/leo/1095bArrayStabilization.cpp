#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int resolver(int cant, vector<int>& list){
	int tam, res, minimos, maximos;
	tam = size(list);
	res = 0;
	if(cant != 2){
		sort(list.begin(), list.end(), greater<int>());

		maximos = list[1] - list[tam - 1];
		minimos = list[0] - list[tam - 2];

		res = min(maximos, minimos);
	}
	return res;

}

int main(){
	int cant, n;
	vector<int> list;

	 cin >> cant;

	 for(int i = 0; i < cant; i++){
	 	cin >> n;
	 	list.push_back(n);
	 }

	 cout << resolver(cant, list) << endl;

}