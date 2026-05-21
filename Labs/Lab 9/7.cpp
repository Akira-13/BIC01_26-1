#include <iostream>

using namespace std;

int main() {
	const int n = 6;
	const int m = 7;
	int A[n] = {1,3,5,7,9,10};
	int B[m] = {2,4,5,6,8,9,10};
	
	const int k_max = n + m;
	int C[k_max];
	
	cout << "Arreglo A: ";
	for(int i = 0; i < n; i++){
		cout << A[i] << " ";
	}
	
	cout << "\nArreglo B: ";
	for(int i = 0; i < m; i++){
		cout << B[i] << " ";
	}
	
    // 3. El Algoritmo de Mezcla con tres índices independientes
    int i = 0; // Índice para recorrer A
    int j = 0; // Índice para recorrer B
    int k = 0; // Índice para llenar C (también contará cuántos elementos únicos quedan)

    // Mientras ambos arreglos tengan elementos por comparar
    while (i < n && j < m) {
        int elemento_elegido;

        if (A[i] < B[j]) {
            elemento_elegido = A[i];
            i++; // Avanzamos en A
        } else if (B[j] < A[i]) {
            elemento_elegido = B[j];
            j++; // Avanzamos en B
        } else {
            // Si son iguales, elegimos cualquiera y avanzamos ambos índices
            // Esto elimina automáticamente los duplicados entre A y B
            elemento_elegido = A[i];
            i++;
            j++;
        }

        // Insertar en C solo si es el primer elemento o si no está repetido
        if (k == 0 || elemento_elegido != C[k - 1]) {
            C[k] = elemento_elegido;
            k++;
        }
    }

    // Si quedaron elementos sueltos en A (porque B se terminó primero)
    while (i < n) {
        if (k == 0 || A[i] != C[k - 1]) {
            C[k] = A[i];
            k++;
        }
        i++;
    }

    // Si quedaron elementos sueltos en B (porque A se terminó primero)
    while (j < m) {
        if (k == 0 || B[j] != C[k - 1]) {
            C[k] = B[j];
            k++;
        }
        j++;
    }

    // 4. Mostrar el resultado
    cout << "\nVector C mezclado y sin repetidos (Tamaño k = " << k << "):\n";
    for (int k_idx = 0; k_idx < k; k_idx++) {
        cout << C[k_idx] << " ";
    }
    cout << endl;

    return 0;
}
