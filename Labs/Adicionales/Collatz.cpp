#include <iostream>
using namespace std;

int main(){
  int pasos = 0, maxPasos = -1;
  int M, maxNumero;
  cout << "Escriba M: ";
  cin >> M;
  while (M <= 0){
    cout << "M debe ser entero positivo.";
    cout << "Ingrese nuevamente: ";
    cin >> M;
  }
  for(int i = 1; i < M; i++){
    int num = i;
    while (num != 1){
      if (num % 2 == 0){
        num /= 2;
      }
      else {
        num = 3*num + 1;
      }
      pasos++;
    }
    if (pasos > maxPasos){
      maxNumero = i;
      maxPasos = pasos;
    }
    pasos = 0;
  }
  cout << "Numero que requiere mayor cantidad de pasos: " << maxNumero << endl;
  cout << "Pasos" << maxPasos;
}
