#include <iostream>
using namespace std;

int main(){
  int n, d1, d2, d3;
  int mayor, menor, intermedio;
  bool esValido, esNegativo = false;
  int mayorNumero;

  cout << "Ingrese el numero: ";
  do{
    cin >> n;
    esValido = true;
    if (n / 100 > 9 || n / 100 < -9 || n / 100 == 0 ){
      esValido = false;
      cout << "Número no es válido. Ingrese nuevamente: ";
    }
  } while (!esValido);

  if (n < 0){
    esNegativo = true;
    n = -1 * n;
  }

  d1 = n % 10;
  n = n / 10;
  d2 = n % 10;
  n = n / 10;
  d3 = n % 10;

  if (d1 >= d2 && d1 >= d3){
    mayor = d1;
    if (d2 >= d3){
      intermedio = d2;
      menor = d3;
    }
    else{
      intermedio = d3;
      menor = d2;
    }
  }
  if (d2 >= d3 && d2 >= d1){
    mayor = d2;
    if (d1 >= d3){
      intermedio = d1;
      menor = d3;
    }
    else{
      intermedio = d3;
      menor = d1;
    }
  }
  if (d3 >= d1 && d3 >= d2){
    mayor = d3;
    if (d2 >= d1){
      intermedio = d2;
      menor = d1;
    }
    else{
      intermedio = d1;
      menor = d2;
    }
  }

  if (!esNegativo){
    mayorNumero = mayor*100 + intermedio*10 + menor;
    cout << "El numero mayor que se forma es: " << mayorNumero;
  }
  else {
    mayorNumero = -1*(menor*100 + intermedio*10 + mayor);
    cout << "El numero mayor que se forma es: " << mayorNumero;
  }
  return 0;
}
