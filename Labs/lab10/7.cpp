#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	const int N = 100;
	// Lleno de ceros
	int A[N][N] = {};
	int B[N][N] = {};
	int C[N][N] = {};

	// Leo tamanos
	int n1, n2, m1, m2;
	cout << "Ingrese numero de filas de la primera matriz entre 1 y 100: "; cin >> n1;
	cout << "Ingrese numero de columnas de la primera matriz entre 1 y 100: "; cin >> n2;
	cout << "Ingrese el numero de filas de la segunda matriz entre 1 y 100: "; cin >> m1;
	cout << "Ingrese el numero de columnas de la segunda matriz entre 1 y 100: "; cin >> m2;
	// Asigno e imprimo A

	for (int i = 0; i < n1; i++){
		for(int j = 0; j < n2; j++){
			A[i][j] = rand() % 10 + 1;
		}
	}
	for (int i = 0; i < n1; i++){
		for(int j = 0; j < n2; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	// Asigno e imprimo B
	for (int i = 0; i < m1; i++){
		for(int j = 0; j < m2; j++){
			B[i][j] = rand() % 10 + 1;
		}
	}
	
	// Imprimir matriz
	for (int i = 0; i < m1; i++){
		for(int j = 0; j < m2; j++){
			cout << B[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	int opcion = 0;
	// Muestro opciones
	cout << "1. Sumar matrices\n2. Multiplicar matrices\n"; cin >> opcion;
	while(opcion != 1 && opcion != 2){
		cout << "Opcion invalida\n1. Sumar matrices\n2. Multiplicar matrices\n"; cin >> opcion;
	}

	switch(opcion){
		case 1:
			// No se suma si no tienen las mismas dimensiones
			if(n1 != m1 || n2 != m2){
				cout << "[!] ERROR: Dimensiones inválidas. Corregir.";
				return 1;
			}
			for(int i = 0; i < n1; i++){
				for(int j = 0; j < n2; j++){
					C[i][j] = A[i][j] + B[i][j];
					cout << C[i][j] << " ";
				}
				cout << endl;
			}
			break;
		case 2:
			if(n2 != m1){
				cout << "[!] ERROR: Dimensiones inválidas. Corregir.";
				return 1;
			}
			for(int i = 0; i < n1; i++){
				for(int j = 0; j < m2; j++){
					for(int k = 0; k < n2; k++){
						C[i][j] += A[i][k] * B[k][j];
					}
					cout << C[i][j] << " ";
				}
				cout << endl;
			}		
			break;
	}
	return 0;
}

