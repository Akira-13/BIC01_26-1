#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	// filas es estudiantes_s
	const int estudiantes_s = 3;
	// columnes es calificaciones_s
	const int calificaciones_s = 4;
	int tabla_calificaciones[estudiantes_s][calificaciones_s];
	int minimo = 99, maximo = 0, nota;
	float prom = 0.0;
	srand(time(NULL));
	
	for(int i = 0; i < estudiantes_s; i++){
		for(int j = 0; j < calificaciones_s; j++){
			nota = rand() % 9 + 2;
			tabla_calificaciones[i][j] = nota;
			if(minimo > nota){
				minimo = nota;
			}
			if(maximo < nota){
				maximo = nota;
			}
		}
	}
	cout << "\t\tNota 1\tNota 2\tNota 3\tNota 4\n";
	for(int i = 0; i < estudiantes_s; i++){
		cout << "Estudiante " << i << "\t";
		for(int j = 0; j < calificaciones_s; j++){
			cout << tabla_calificaciones[i][j] << "\t";
		}
		cout << endl;
	}	
	
	cout << "Nota minima: " << minimo << endl;
	cout << "Nota maxima: " << maximo << endl; 
	
	for(int i = 0; i < estudiantes_s; i++){
		for(int j = 0; j < calificaciones_s; j++){
			// para i = 0 -> estudiante 0
			// para j = 0 -> nota 0 del estudiante 0
			// nota = tabla_calificaciones[0][0]
			// prom = 0 + nota = 0 + 10
			
			// para i = 0, para j = 1 -> nota 1 del estudiante 0
			// prom = 10 + 8
			
			// ...
			nota = tabla_calificaciones[i][j];
			prom += nota;
		}
		prom /= (float) calificaciones_s;
		cout << "Promedio de estudiante " << i << ": " << prom << endl;
		prom = 0;
	}
	
    return 0;
}
