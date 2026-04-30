#include <iostream>
using namespace std;

int main(){
  double N;
  cout << "Ingrese N: ";
  cin >> N;
  while (N <= 0){
    cout << "N debe ser entero positivo.";
    cout << "Ingrese nuevamente: ";
    cin >> N;
  }
  for (double c = N; c > 0; c--){
    for (double b = c-1; b > 0; b--){
      for (double a = b; a > 0; a--){
        if (a*a + b*b == c*c){
          cout << "Triple pitagórico: " << a << ", " << b << ", " << c << endl;
        }
      }
    }
  }
}
