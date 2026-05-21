#include <iostream>
using namespace std;

int main(){
	const int SIZE = 5;
	int v[SIZE];
	int mayor = 0;
	for (int i = 0; i < SIZE; i++){
		cout << "Ingrese el valor en el indice " << i <<": ";
		cin >> v[i];
	}
	
	for (int i = 0; i < SIZE; i++){
		if(v[i] > mayor){
			mayor = v[i];
		}
	}
	cout << "El mayor es: " << mayor;

	return 0;
}

