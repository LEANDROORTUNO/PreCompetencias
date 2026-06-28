#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

int resolver(int cap, int (&list_num)[12]){
	int res, acumulador;
	bool encontrado = false;
	acumulador = res = 0;

	if(cap != 0){	
		//investigar...
		sort(list_num, list_num + 12, greater<int>());

        for(int i = 0; (i < size(list_num)) && (acumulador < cap) && (!encontrado); i++){
            acumulador += list_num[i];
            res += 1;

            if(acumulador >= cap){
                encontrado = true;
            }
        }
    

    
    	if( acumulador < cap){
        	res = -1;
    	}
	}

	return res;
}

int main(){
	int cap, n; 
	int list_num[12];

	cin >> cap;
	for(int i = 0; i < size(list_num); i++){
		cin >> n;
		list_num[i] = n;
	}

	cout << resolver(cap, list_num) << endl;
}