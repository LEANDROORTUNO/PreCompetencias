#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int cards_number;
vector<int> cards_list;
vector<int> answers;

void mostrar(){
    for(int aux : answers){
        cout << aux << "\n";
    }
}

void resolve(){
    int n = cards_list.size();
    
    // Si solo hay una carta
    if(n == 1){
        answers.push_back(cards_list.at(0));
        return;
    }

    // Contar frecuencias de cada valor de carta
    map<int, int> frecuencias;
    int max_freq = 0;
    int val_max_freq = 0;
    long long sum_all = 0;

    for(int card : cards_list){
        frecuencias[card]++;
        sum_all += card;
        if(frecuencias[card] > max_freq){
            max_freq = frecuencias[card];
            val_max_freq = card;
        }
    }

    // Condición para saber si podemos obtener la suma total
    // Si la frecuencia máxima cabe de manera balanceada (max_freq <= (n + 2) / 2)
    if(max_freq <= (n + 2) / 2){
        answers.push_back(sum_all);
    } else {
        // Si hay demasiadas cartas iguales, calculamos la suma de las demás más 2 apariciones de la dominante
        long long sum_others = sum_all - (long long)max_freq * val_max_freq;
        long long answer = sum_others + 2 * val_max_freq;
        answers.push_back(answer);
    }
}

void add_Cards(){
    for(int i = 0; i < cards_number; i++){
        int card_power; 
        cin >> card_power;
        cards_list.push_back(card_power);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases;
    cin >> test_cases;

    for(int i = 0; i < test_cases; i++){
        cin >> cards_number;
        add_Cards();
        resolve();
        cards_list.clear();
    }

    mostrar();
    return 0;
}