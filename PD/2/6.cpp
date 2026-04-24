#include <iostream>
using namespace std;

int main(){
  int a, b, min, max, mcd;
  cin >> a >> b;
  // caso directo
  // uno de ellos es 0
  // mcd(5,0) = 5
  if (a == 0 && b == 0){
    cout << "No hay MCD";
  }
  else if (a == 0){
    cout << "El MCD es " << b;
    return 0;
  }
  else if (b == 0){
    cout << "El MCD es" << a;
    return 0;
  }
  
  if (a < b){ min = a; max = b;}
  else { min = b; max = a;}
   
  // caso mcd = min
  // por ejemplo si tenemos mcd(10, 30) es directamente 10
  // porque 10 es el minimo y divide a 30
  if (max % min == 0){
    mcd = min;
    cout << "El MCD es " << mcd;
    return 0;
  }

  mcd = min / 2;
  do{
    if (max % mcd == 0 && min % mcd == 0){
      cout << "El MCD es " << mcd;
      return 0;
    }
    mcd--;
  } while (mcd > 0);
  return 0;
}

// mcd (15, 10) sabemos que el resultado no puede ser mayor que 10 / 2
// entonces sabemos que el resultado no puede ser menor que el minimo / 2

