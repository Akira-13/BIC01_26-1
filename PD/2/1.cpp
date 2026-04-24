#include <iostream>
using namespace std;

int main() {
    int numero, auxiliar;
    int digito, contadorPares = 0;

    cout << "Ingrese un número entero: ";
    // TODO: Verificar que sea no negativo
    cin >> numero;

    cout << "Dígitos pares encontrados: ";

    do {
        // 1. Extraer el último dígito
        digito = numero % 10;

        // 2. Verificar si es par
        if (digito % 2 == 0) {
            cout << digito << " ";
            contadorPares++;
        }

        // 3. Eliminar el último dígito procesado
        // numero = numero / 10;
        numero /= 10;
        // numero = 7
        // numero / 10 = 0.7 = 0

    } while (numero > 0); // Continuar mientras queden dígitos

    // Resultados finales
    cout << "Total de dígitos pares: " << contadorPares << endl;
    return 0;
}
