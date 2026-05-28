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

	float promedio = 0;
	cout << "Elementos de diagonal principal: ";
	for (int i = 0; i < N; i++){
		cout << A[i][i] << " ";
		promedio += (float) A[i][i];
	}
	cout << "\nPromedio es: " << promedio / N;
	return 0;
}

