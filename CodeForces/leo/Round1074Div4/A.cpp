#include <iostream>
#include <vector>

using namespace std;

void resolve() {
    int n;
    cin >> n;

    
    for(int i = 1; i <= n; i++){
        cout << i << (i == n ? "" : " ");
    }
    
    cout << "\n";
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases_number;
    cin >> cases_number;

    
    for(int i = 0; i < cases_number; i++){
        resolve();
    }

    return 0;
}