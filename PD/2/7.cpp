#include <iostream>
using namespace std;

int main(){
  int n, d;
  int invertido = 0;
  bool esValido;
  // int, float, char, bool
  // bool puede ser true o false
  do{
    cout << "Ingrese el numero: ";
    cin >> n;
    esValido = true;
    if (n <= 10){
      esValido = false;
      cout << "Numero debe ser mayor que 10" << endl;
    } 
  } while(esValido == false);

  do{
    d = n % 10;
    invertido *= 10; // invertido = invertido * 10;
    invertido += d; // invetido = invertido + 10;
    n /= 10;
  } while (n != 0);

  cout << "Numero invertido es: " << invertido;
  return 0;
}
