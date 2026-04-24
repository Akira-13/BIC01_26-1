#include <iostream>
using namespace std;

int main(){
  int num, prom = 0, max, min;
  int cant = 0;
  do{
    cout << "ingrese el número a promediar (para terminar ingrese negativo) ";
    cin >> num;
    if (num > 0){
      prom += num; // prom = prom + num
      if (cant == 0){
        max = num; min = num;
      }
      else if (num > max){ max = num; }
      else if (num < min){ min = num; }
      cant++;
    }
  } while (num > 0);
  prom = prom / cant;
  cout << "Promedio es: " << prom << endl;
  cout << "Máximo es: " << max << endl;
  cout << "Mínimo es: " << min << endl;
  return 0;
}
