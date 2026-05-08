#include <iostream>
using namespace std;

int main() {
    int max_frecuencia = 0;
    int conteo;

    // Las posibles sumas son del 3 al 30
    // Dado un i, se cuentan cuantas veces x+y+z es i cuando van de 1 a 10
    for (int i = 3; i <= 30; i++) {
        conteo = 0;
        for (int x = 1; x <= 10; x++) {
            for (int y = 1; y <= 10; y++) {
                for (int z = 1; z <= 10; z++) {
                    if (x + y + z == i) {
                        conteo++;
                    }
                }
            }
        }
        // Si el conteo actual es mayor a la maxima frecuencia encontrada al momento,
        // se reemplaza la maxima frecuencia con el conteo
        if (conteo > max_frecuencia) {
            max_frecuencia = conteo;
        }
    }

    cout << "Mayor cantidad de repeticiones: " << max_frecuencia << endl;
    cout << "Valor(es) que mas se repiten: " << endl;

    // Conociendo la maxima frecuencia, imprimimos los valores que tienen esta frecuencia
    // En esencia se repiten los mismos 4 bucles
    // Al final, en lugar de guardar el mayor, solo se imprime el i
    for (int i = 3; i <= 30; i++) {
        conteo = 0;
        for (int x = 1; x <= 10; x++) {
            for (int y = 1; y <= 10; y++) {
                for (int z = 1; z <= 10; z++) {
                    if (x + y + z == i) {
                        conteo++;
                    }
                }
            }
        }
        if (conteo == max_frecuencia) {
            cout << i << endl;
        }
    }

    return 0;
}
