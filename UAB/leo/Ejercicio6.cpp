#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string convertir(string cadena){
	string res = "";
	for(char c : cadena){
		if(c >= 'A' && c <= 'Z'){
			res = res + '_' + (char)tolower(c);
		}else{
			res += c;
		}
	}
	return res;
}


int main(){
	string cadena, res;

	cin >> cadena;
	res = convertir(cadena);
	cout << res << endl;


}