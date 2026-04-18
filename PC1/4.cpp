#include <iostream>
using namespace std;

int main(){
  int A, B, C;
  int mayor;
  // Recomendable booleano y no int
  // bool mayor_encontrado = false;
  int mayor_encontrado = 0;
  int menores_supera = 0;
  cin >> A >> B >> C;

  /*
   * Consideramos que el mayor es el mayor de todos
   * Si consideramos que dos números pueden ser el mayor
   * ej. A = 4, B = 4, C = 1
   * Podemos hacer if (A > = B && A >= B && B != C)
   * para asegurarnos que los tres no sean iguales.
   * Si los tres son iguales, claramente no hay mayor.
   */
  if (A > B && A >C){
    mayor = A;
    mayor_encontrado = 1;
  }
  else if (B > A && B > C){
    mayor = B;
    mayor_encontrado = 1;
  }
  else if (C >= B && C >= A){
    mayor = C;
    mayor_encontrado = 1;
  }

  // Si no hay mayor (todos iguales o dos iguales), lo mostramos
  if (mayor_encontrado != 1){
    cout << "No hay número mayor que todos!";
    // Terminamos el algoritmo
    return 0;
  }
  
  // Version larga: Comparar cada suma
  // if (mayor == A){
  //   if (C + B <= A){
  //     cout << "Mayor es: " << A;
  //   }
  //   else{
  //      cout << "La suma de menores supera el mayor.";
  //    }
  //  }
  //  if (mayor == B){
  //    if (A + C <= B){
  //      cout << "Mayor es: " << B;
  //    }
  //    else{
  //      cout << "La suma de menores supera el mayor.";
  //    }
  //  }
  //  if (mayor == C){
  //    if (A + B <= C){
  //      cout << "Mayor es: " << C;
  //    }
  //    else{
  //      cout << "La suma de menores supera el mayor.";
  //    }
  //  }
  //

  // Version corta
  if (A + B + C - 2*mayor > 0){
    cout << "La suma de menores supera al mayor!";
  }
  else{
    cout << "El mayor es: " << mayor;
  }
 return 0;
}
