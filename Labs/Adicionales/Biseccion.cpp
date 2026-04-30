#include <iostream>
#include <cmath>
using namespace std;

int main(){
  float tol, a, b, valA;

  cout << "Ingrese tolerancia: ";
  cin >> tol;

  cout << "Ingrese límites a b: ";
  cin >> a >> b;

  float c = (a + b) / 2;
  float res = c*c*c - 2*c - 5;

  while(abs(res) > tol){
    valA = a*a*a -2*a - 5;
    
    if(res * valA < 0) {
      b = c;
    }
    else if(res * valA > 0){
      a = c;
    } 

    c = (a+b) / 2;
    res = c*c*c - 2*c - 5;
  }
  
  cout << "La solución aproximada es: " << c;
}
