#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int verificar(string cad1, string cad2){
	int res = 0;
	for(int i = 0; i < cad1.length(); i++){
		cad1.at(i) = tolower(cad1.at(i));
		cad2.at(i) = tolower(cad2.at(i));
	}

	if(cad1 < cad2){
		res = -1;
	}else if(cad1 > cad2){
		res = 1;
	}
	return res;
}

int main(){
	string cad1;
	string cad2;
	cin >> cad1;
	cin >> cad2;
	int res = verificar(cad1, cad2);
	cout << res << endl;
}