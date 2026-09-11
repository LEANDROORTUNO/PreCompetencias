#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void mostrar(const vector<long long>& respuestas) {
    for (long long n : respuestas) {
        cout << n << "\n";
    }
}

long long resolver(long long empleados, long long proyectos, long long meses) {
    long long res = 0;
    long long meses_restantes = meses;

    while (meses_restantes > 0) {
        long long k = proyectos / empleados;

    
        if (k == 0) {
            long long p_inicio = proyectos;
            long long p_fin = proyectos + meses_restantes - 1;
            res += (p_inicio + p_fin) * meses_restantes / 2;
            break;
        }

    
        long long dec = k - 1;

        if (dec == 0) {
            
            long long dif = proyectos - empleados;
            long long max_meses = empleados - dif;

            if (max_meses <= 0) {
                
                res += proyectos % empleados;
                empleados++;
                proyectos++;
                meses_restantes--;
            } else {
                long long pasos = min(meses_restantes, max_meses);
                long long r_constante = proyectos - empleados; // P % E
                res += r_constante * pasos;

                empleados += pasos;
                proyectos += pasos;
                meses_restantes -= pasos;
            }
        } else {
            
            long long r_actual = proyectos % empleados;
            long long max_meses = r_actual / dec + 1;
            long long pasos = min(meses_restantes, max_meses);

            if (pasos == 1) {
                res += r_actual;
                empleados++;
                proyectos++;
                meses_restantes--;
            } else {
                long long r_inicio = r_actual;
                long long r_fin = r_inicio - (pasos - 1) * dec;
                res += (r_inicio + r_fin) * pasos / 2;

                empleados += pasos;
                proyectos += pasos;
                meses_restantes -= pasos;
            }
        }
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numero_casos;
    if (!(cin >> numero_casos)) return 0;

    vector<long long> respuestas;

    for (int i = 1; i <= numero_casos; i++) {
        long long empleados, proyectos, meses;
        cin >> empleados >> proyectos >> meses;
        respuestas.push_back(resolver(empleados, proyectos, meses));
    }

    mostrar(respuestas);

    return 0;
}