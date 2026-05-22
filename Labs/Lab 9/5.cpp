#include <iostream>
using namespace std;

int main(){
	// Definicion del vector
	const int SIZE = 5;
	int v[SIZE];
	int mayor = 0;
	int segundo_mayor = 0;
	
	// Lectura de entrada estandar
	for (int i = 0; i < SIZE; i++){
		cout << "Ingrese el valor en el indice " << i <<": ";
		cin >> v[i];
	}
	
	// Hallar el mayor valor
	for (int i = 0; i < SIZE; i++){
		if(v[i] > mayor){
			mayor = v[i];
		}
	}
	cout << "El mayor es: " << mayor;

	// Hallar el mayor valor
	for (int i = 0; i < SIZE; i++){
		if(v[i] > segundo_mayor && v[i] != mayor){
			segundo_mayor = v[i];
		}
	}
	cout << "El segundo mayor es: " << segundo_mayor;

	return 0;
}

