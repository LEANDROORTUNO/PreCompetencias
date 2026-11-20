#include <iostream>
#include <vector>

using namespace std;

int numero_sillas;
vector<int> sillas;
vector<bool> marcados;
vector<int> answers;

void resolver(){
	int n = sillas.size();
	vector<int> dp(n + 1, 0);

	
	for (int j = n - 1; j >= 0; j--) {
		
		int saltar = dp[j + 1];

		
		int objetivo = sillas[j] - 1;
		int sentarse = 1;

		if (objetivo <= j) {
			
			sentarse += dp[j + 1];
		} else {
			int extra = 0;
			int limite = objetivo;
			for (int k = j + 1; k < limite; k++) {
				int next_mark = sillas[k] - 1;
				extra++;
				if (next_mark > k && next_mark < limite) {
					limite = next_mark;
				}
			}
			sentarse += extra;
		}

		dp[j] = max(saltar, sentarse);
	}

	answers.push_back(dp[0]);
}


void mostrar(){
	for(int aux : answers){
		cout << aux << "\n";
	}
}

signed main(){
	int number_cases, aux; cin >> number_cases;

	for(int i = 0; i < number_cases; i++){
		cin >> numero_sillas;

		for(int i = 0; i < numero_sillas; i++){
			cin >> aux;
			sillas.push_back(aux);
		}

		
		resolver();
		sillas.clear();

	}		

	mostrar();
}