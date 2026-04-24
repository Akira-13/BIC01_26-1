#include <iostream>
using namespace std;

int main(){
  int n, d, aux;
  int invertido = 0;
  cout << "Ingrese el numero: ";
  cin >> n;

  if (n == 0){
    cout << "No es divisible por alguna de sus cifras";
    return 0;
  }

  aux = n;
  do{
    d = aux % 10;
    if (d == 0){
      aux = aux / 10;
      continue;
    }
    else if (n % d == 0){
      cout << "El numero es divisible por el digito " << d;
      return 0;
    }
    aux = aux / 10;
  } while (aux != 0);

  cout << "No es divisible por alguna de sus cifras";
  return 0;
}
