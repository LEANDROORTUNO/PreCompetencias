#include <iostream>
#include <vector>
#include <optional>

using namespace std;

int main(){
	//	vector<optional<bool>> array = {true, true, nullopt, true, nullopt};
	vector<optional<bool>> array = {true, true, nullopt, false, nullopt};
	bool res = true;
	for(optional<bool> n : array){
		if(!(n == true) && !(n == nullopt)){
			res = false;
		}
	}
	if(res){
		cout << "TRUE";
	}else{
		cout << "FALSE";
	}
}