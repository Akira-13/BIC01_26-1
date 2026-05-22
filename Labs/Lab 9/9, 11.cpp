#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	// Definimos la matriz
	srand(time(0));
	const int n = 3;
	int matriz[n][n];
	int matriz_t[n][n];
	bool es_simetrica = true;
	
	cout << "Matriz original:\n";
	// Llenamos con valores aleatorios e imprimimos
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			matriz[i][j] = 1;
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	
	// Transpuesta: Filas son columnas y columnas son filas
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			// Cuando i = 1 y j = 2
			// El elemento de la fila 1 y columna 2 de la matriz original
			// será el elemento de la fila 2 y columna 1 de la matriz transpuesta
			matriz_t[j][i] = matriz[i][j];
			if(matriz[i][j] != matriz[j][i]){
				es_simetrica = false;
			}
		}
	}

	
	// Imprimimos transpuesta
	cout << "\nMatriz transpuesta:\n";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << matriz_t[i][j] << " ";
		}
		cout << endl;
	}
	
	if(es_simetrica){
		cout << "Las matrices son simetricas!";
	}
	else{
		cout << "Las matrices no son simetricas!";
	}
	return 0;
}

