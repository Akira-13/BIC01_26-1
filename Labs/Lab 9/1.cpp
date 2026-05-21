#include <iostream>
using namespace std;

int main(){
	const int SIZE = 4;
	int suma = 0;
	int v[SIZE] = {1, 2, 3, 4};
	cout << "El arreglo es: ";
	for (int i = 0; i < SIZE; i++){
		cout << v[i] << ", ";
	}
	for (int i = 0; i < SIZE; i++){
		suma += v[i];
	}
	cout << "\nSuma de elementos: " << suma;
	return 0;
}
