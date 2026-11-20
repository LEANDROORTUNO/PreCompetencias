#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    long long ceros = 0;
    long long unos = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            ceros++;
        } else {
            unos++;
        }
    }

    // Maximizamos el grupo más grande usando hasta k inversiones
    long long mayor = max(ceros, unos);
    long long nuevoMayor = min(n, mayor + k);
    long long nuevoMenor = n - nuevoMayor;

    // Fórmula: 1 + mayor*(mayor+1)/2 + menor*(menor+1)/2
    long long diversidad = 1 + (nuevoMayor * (nuevoMayor + 1)) / 2 
                            + (nuevoMenor * (nuevoMenor + 1)) / 2;

    cout << diversidad << "\n";
}

int main() {
    // Optimización de entrada/salida rápida para Codeforces
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}	