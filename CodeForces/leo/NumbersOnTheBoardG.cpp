#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

vector<int> rango_numeros;
vector<int> respuestas;
vector<int> subvector;
int numero_casos;



void armar_rango(int inicio, int fin){
    rango_numeros.push_back(inicio);

    while(inicio < fin){
        inicio++;
        rango_numeros.push_back(inicio);
    }
}


int suma_elementos(){
    int suma_elementos = 0;

    for(int numero : rango_numeros){
        suma_elementos += numero;
    }

    return suma_elementos;
}


bool puros_positivos(){
    bool res = true;
    for(int numero : rango_numeros){
        if(numero < 0){
            res = false;
        }
    }

    return res;
}

int eliminar_anteriores(){
    int res = 0;

    if(rango_numeros.front() == 0){
        res = rango_numeros.size() - 2;
    }else{
        res = rango_numeros.size() - 1;
    }

    return res;
}

bool existe_secuencia(){
    bool existe1, existe2, existe, existee;

    existe1 = binary_search(rango_numeros.begin(), rango_numeros.end(), -1);
    existe2 = binary_search(rango_numeros.begin(), rango_numeros.end(), -2);
    existe  = binary_search(rango_numeros.begin(), rango_numeros.end(), 1);
    existee = binary_search(rango_numeros.begin(), rango_numeros.end(), 2);

    return existe1 && existe2 && existe && existee;
}


void resolver(int inicio, int fin){
    // Caso especial: si el rango es solo 0
    if(inicio == 0 && fin == 0){
        respuestas.push_back(0);
        return;
    }

    // Caso 1: Todos positivos (ej: 2 6)
    if(inicio > 0){
        respuestas.push_back(fin - inicio);
    }
    // Caso 2: Todos negativos (ej: -5 -3)
    else if(fin < 0){
        respuestas.push_back(fin - inicio);
    }
    // Caso 3: Rangos mixtos que cruzan el cero
    else {
        // Buscamos si el cero está dentro y podemos aprovechar la simetría
        if(suma_elementos() == 0){
            respuestas.push_back(0);
        } else {
            // Evaluamos la cantidad de elementos a eliminar basándonos en la longitud 
            // y la posición del balance respecto al cero.
            int total_elementos = rango_numeros.size();
            
            if(existe_secuencia()){
                // Si contiene la secuencia central de equilibrio (-2, -1, 1, 2)
                if(inicio == -2){
                    respuestas.push_back(fin - 2);
                } else {
                    respuestas.push_back(abs(-2 - inicio) - (inicio < -2 ? 1 : 0));
                }
            } else {
                // Si empieza en 0
                if(rango_numeros.front() == 0){
                    respuestas.push_back(total_elementos - 2);
                } else {
                    respuestas.push_back(total_elementos - 1);
                }
            }
        }
    }

    subvector.clear();
}



void mostrar_respuesta(){
    for(int numero : respuestas){
        cout << numero << endl;
    }
}


int main(){
    int l, t;

    cin >> numero_casos;

    for(int i  = 0; i < numero_casos; i++){
        cin >> l >> t;

        armar_rango(l, t);

        resolver(l, t);

        rango_numeros.clear();
    }


    mostrar_respuesta();

}