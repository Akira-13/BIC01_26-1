#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  srand(time(NULL));
  int puntosDentro = 0;
  double N;
  double x, y, piAprox;
  cout << "Ingrese número de puntos: ";
  cin >> N;
  for (int i = 0; i < N; i++){
    x = (double)rand() / RAND_MAX * 2 - 1;
    y = (double)rand() / RAND_MAX * 2 - 1;
    if (x*x + y*y <= 1.0){
        puntosDentro++;
    }
  }
  piAprox = 4.0 * puntosDentro / N;
  cout << "pi aproximado: " << piAprox;
}
