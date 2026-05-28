#include <iostream>
using namespace std;
int main()
{
	const int N = 6;
	int a, b;
	cout << "Ingrese el límite inferior a: "; cin >> a;
	cout << "Ingrese el límite inferior b: "; cin >> b;

	// Inicializo la matriz solo con unos
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			A[i][j] = 1;
		}
	}
	return 0;
}

