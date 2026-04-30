#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  int N;
  int sumaDivs = 0;
  cout << "Escriba N: ";
  cin >> N;
  while (N <= 0){
    cout << "N debe ser entero positivo.";
    cout << "Ingrese nuevamente: ";
    cin >> N;
  }
  for (int i = 1; i <= N; i++){
    for (int j = 1; j <= i/2; j++){
      if (i % j == 0){
        sumaDivs += j;
      }
    }
    if (sumaDivs == i) {
      cout << "Numero perfecto encontrado! " << i << endl;
    }
    sumaDivs = 0;
  }
}
