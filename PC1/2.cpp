#include <iostream>
using namespace std;

int main(){
  // coordenadas, distancias, area
  float x1, y1, x2, y2, x3, y3, d1, d2, d3, a;
  cout << "Ingrese coordenadas (x1, y1): ";
  cin >> x1 >> y1;
  cout << "Ingrese coordenadas (x2, y2): ";
  cin >> x2 >> y2;
  
  // Verificar que no haya coordenadas repetidas
  while(x1 == x2 && y1 == y2){
    cout << "No se permiten coordenadas repetidas!" << endl;
    cout << "Ingrese coordenadas (x1, y1) nuevamente: ";
    cin >> x1 >> y1;
    cout << "Ingrese coordenadas (x2, y2) nuevamente: ";
    cin >> x2 >> y2;
  }

  cout << "Ingrese coordenadas (x3, y3): ";
  cin >> x3 >> y3;

  // Verificar que no haya coordenadas repetidas
  // Ya verificamos que las primeras dos no se repitan
  // Solo verificamos la última con la primera y con la segunda
  while((x3 == x1 && y3 == y1) || (x3 == x2 && y3 == y2)){
    cout << "No se permite coordenadas repetidas!" << endl;
    cout << "Ingrese coordenadas (x3, y3) nuevamente: ";
    cin >> x3 >> y3;
  }

  // Si son colineales (area = 0), se termina el código
  a = x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2);
  if (a == 0.0){
    cout << "Puntos colineales! No hay triángulo!";
    return 0;
  }

  // Calculamos distancias euclidianas al cuadrado
  d1 = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
  d2 = (x3-x2)*(x3-x2) + (y3-y2)*(y3-y2);
  d3 = (x1-x3)*(x1-x3) + (y1-y3)*(y1-y3);

  // Si hay un par de distancias iguales, es isósceles
  if (d1 == d2 || d2 == d3 || d1 == d3){
    cout << "Es isósceles!";
  }
  else{
    cout << "No es isósceles";
  }
  return 0;
}

