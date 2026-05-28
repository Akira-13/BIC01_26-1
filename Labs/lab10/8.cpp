#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	const int N = 5;
	int A[N][N];
	srand(time(NULL));
	// Definir matriz
	for (int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			A[i][j] = rand() % 10 + 1;
		}
	}
	// Imprimir matriz
	for (int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}

	int opcion = 0;
	int i, j, elemento;
	cout << "\n1. Eliminar elemento\n2.Cambiar elemento\n"; cin >> opcion;

	switch (opcion){
		case 1:
			cout << "Ingrese fila (desde 0): "; cin >> i;
			cout << "Ingrese columna (desde 0): "; cin >> j;
			A[i][j] = 0;
			break;
		case 2:
			cout << "Ingrese fila (desde 0): "; cin >> i;
			cout << "Ingrese columna (desde 0): "; cin >> j;
			cout << "Ingrese elemento nuevo: "; cin >> elemento;
			A[i][j] = elemento;
			break;
	}

	// Imprimir matriz
	for (int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}

