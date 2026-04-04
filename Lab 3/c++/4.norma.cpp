#include <iostream>
using namespace std;

int main() {
    int n;
    double v[100];
    double norma = 0;

    // Leer n 
    cin >> n;

    // Leer los elementos del vector v 
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Calcular la suma de los cuadrados 
    for(int i = 0; i < n; i++) {
        norma = norma + (v[i] * v[i]);
    }

    // Imprimir el resultado final 
    cout << norma << endl;

    return 0;
}
