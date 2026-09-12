#include <iostream>

using namespace std;

int main() {
    // Optimización de I/O para el juez
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    if (!(cin >> n >> a >> b)) return 0;

    bool tiene_min = false;
    bool tiene_max = false;

    for (int i = 0; i < n - 1; i++) {
        int w;
        cin >> w;
        if (w == a) tiene_min = true;
        if (w == b) tiene_max = true;
    }

    // Caso 1: Faltan ambos y son distintos (Imposible cubrir ambos en 1 solo día)
    if (!tiene_min && !tiene_max && a != b) {
        cout << -1 << "\n";
    } 
    // Caso 2: Solo falta el mínimo
    else if (!tiene_min) {
        cout << a << "\n";
    } 
    // Caso 3: Solo falta el máximo
    else if (!tiene_max) {
        cout << b << "\n";
    } 
    // Caso 4: Ya están el mínimo y el máximo; puede ser cualquier valor en [a, b]
    else {
        for (int x = a; x <= b; x++) {
            cout << x << (x == b ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}