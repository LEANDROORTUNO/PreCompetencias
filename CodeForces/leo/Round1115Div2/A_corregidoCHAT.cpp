#include <iostream>
#include <vector>

using namespace std;

int cards_number;
vector<int> cards_list;
vector<int> answers;

void mostrar(){
    for(int aux : answers){
        cout << aux << endl;
    }
}

int all_sum(){
    int sum_total = 0;
    for(int aux : cards_list){
        sum_total += aux;
    }
    return sum_total;
}

void resolve(){
    int answer = all_sum();
    vector<int> frequency(1001, 0);
    int max_repetitions = 0;
    int most_repeated_damage = 0;

    for(int aux : cards_list){
        frequency[aux]++;
        if(frequency[aux] > max_repetitions){
            max_repetitions = frequency[aux];
            most_repeated_damage = aux;
        }
    }

    int other_cards = cards_number - max_repetitions;
    int playable_repeated_cards = other_cards + 2;

    if(max_repetitions > playable_repeated_cards){
        int unused_cards = max_repetitions - playable_repeated_cards;
        answer -= unused_cards * most_repeated_damage;
    }

    answers.push_back(answer);
}

void add_Cards(){
    for(int i = 0; i < cards_number; i++){
        int card_power;
        cin >> card_power;
        cards_list.push_back(card_power);
    }
}

int main(){
    int test_cases;
    cin >> test_cases;

    for(int i = 0; i < test_cases; i++){
        cin >> cards_number;
        add_Cards();
        resolve();
        cards_list.clear();
    }

    mostrar();
}
