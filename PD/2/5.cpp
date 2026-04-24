#include <iostream>
using namespace std;

int main() {
    int id, contadorEstudiantes = 0;
    float examen1, proyecto1, examen2, proyecto2;
    float notaFinal1, notaFinal2;
    float sumaFinal1 = 0, sumaFinal2 = 0;


    cout << "--- SISTEMA DE CALIFICACIONES ---" << endl;
    cout << "(Ingrese un ID negativo para finalizar)" << endl;

    do {
        cout << endl << "Ingrese el ID del alumno (4 digitos): ";
        cin >> id;

        if (id >= 0) {
            cout << "Asignatura 1 - Nota Examen y Proyecto: ";
            cin >> examen1 >> proyecto1;
            cout << "Asignatura 2 - Nota Examen y Proyecto: ";
            cin >> examen2 >> proyecto2;

            notaFinal1 = (examen1 * 0.70) + (proyecto1 * 0.30);
            notaFinal2 = (examen2 * 0.70) + (proyecto2 * 0.30);

            cout << "Alumno: " << id << ": "
                 << "Asig1: " << notaFinal1 << " | "
                 << "Asig2: " << notaFinal2 << endl;

            sumaFinal1 += notaFinal1;
            sumaFinal2 += notaFinal2;
            contadorEstudiantes++;
        }

    } while (id >= 0);

    // Cálculos finales después del bucle
    if (contadorEstudiantes > 0) {
        float promedioAsig1 = sumaFinal1 / contadorEstudiantes;
        float promedioAsig2 = sumaFinal2 / contadorEstudiantes;

        cout << endl << "============================================" << endl;
        cout << "RESUMEN DE LA CLASE" << endl;
        cout << "Total de alumnos procesados: " << contadorEstudiantes << endl;
        cout << "Promedio Final Asignatura 1: " << promedioAsig1 << endl;
        cout << "Promedio Final Asignatura 2: " << promedioAsig2 << endl;
        cout << "============================================" << endl;
    } else {
        cout << "\nNo se ingresaron datos de estudiantes." << endl;
    }

    return 0;
}
