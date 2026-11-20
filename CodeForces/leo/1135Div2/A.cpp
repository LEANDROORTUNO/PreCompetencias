#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int length_permutation;
vector<int> casos;
vector<int> answers;


void mostrar(){
	for(int aux : answers){
		cout << aux << " ";
	}

	cout << "\n";
	answers.clear();
}

void forImpares(int caso){
	for(int i = 1; i <= caso; i++){
        if(i == 1){
            answers.push_back(caso - 1);
        }
        else if(i == 2){
            answers.push_back(caso);
        }
        else if(i == 3){
            answers.push_back(caso - 2);
        }
        else {
            
            answers.push_back(i - 3);
        }
    }

	mostrar();
}

void forPares(int caso){
	int aux = caso;

	for(int i = 1; i <= caso; i++){
		answers.push_back(aux);
		aux -= 1;
	}

	mostrar();
}


void resolver(){
	for(int i = 0; i < size(casos);i ++){
		if(casos.at(i) == 1 || casos.at(i) == 2 || casos.at(i) == 3){
			answers.push_back(-1);
			mostrar();
		}else if(casos.at(i) % 2 == 0){
			forPares(casos.at(i));
		}else{
			forImpares(casos.at(i));
		}
	}
}


int main(){
	 int cases_number;

	 cin >> cases_number;

	 for(int i = 0; i < cases_number; i++){
	 	cin >> length_permutation;
	 	casos.push_back(length_permutation);

	 }

	 resolver();
}