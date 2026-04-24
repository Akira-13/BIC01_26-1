#include <iostream>
using namespace std;

int main() {
    int n;
    double coeficiente[100];
    double derivada[100];

    // Leer n 
    cin >> n;

    // Llenar el arreglo de coeficientes 
    for(int i = 0; i < n; i++) {
        cin >> coeficiente[i];
    }

    // Calcular la derivada 
    for(int i = 0; i < n; i++) {
        if (coeficiente[i] != 0) {
            derivada[i] = coeficiente[i] - 1;
        } else {
            derivada[i] = 0;
        }
    }

    // Imprimir el arreglo resultante 
    for(int i = 0; i < n; i++) {
        cout << derivada[i] << " ";
    }

    return 0;
}
