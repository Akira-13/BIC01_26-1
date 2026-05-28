#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	const int N = 3;
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
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	// Copiar matriz a arreglo unidimensional
	const int M = N*N;
	int B[M];
	int indice_v = 0;
	for(int i = 0; i < N; ++i){ // ++i  i = i+1
		for(int j = 0; j < N; ++j){
			B[indice_v] = A[i][j];
			indice_v = indice_v + 1;
		}
	}

	// Imprimir arreglo unidimensional
	for(int i = 0; i < M; i++){
			cout << B[i] << " ";
		}
	cout << endl;

	// Ordenar arreglo unidimensional
	int aux;
	for(int i = 0; i < M; i++){
		for(int j = 0; j < M - 1; j++){
			if (B[j] < B[j+1]){
				aux = B[j];
				B[j] = B[j+1];
				B[j+1] = aux;
			}
		}
	}
	// Imprimir arreglo unidimensional
	for(int i = 0; i < M; i++){
			cout << B[i] << " ";
	}
	return 0;
}

