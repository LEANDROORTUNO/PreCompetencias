#include <iostream>

using namespace std;
int main(){
	int a = 0;
	int b = 1;
	int aux = 0;
	cout << a << " ,"<< b;
	while(aux <= 50){
		aux = a + b;
		a = b;
		b = aux;
		cout << " ," << aux;
		
	}

} 