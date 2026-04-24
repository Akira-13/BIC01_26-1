#include <iostream>
using namespace std;

int main(){
  int n;
  bool esValido;
  cout << "Ingrese el numero: ";
  do{
    cin >> n;
    esValido = true;
    if (n < 10 || n > 99){
      cout << "Numero no es válido" << endl;
      esValido = false;
    }
  } while (!esValido);

  int d1 = n % 10;
  int d2 = n / 10;
  bool d1EsPrimo = false;
  bool d2EsPrimo = false;

  switch(d1){
    case 2:
      d1EsPrimo = true;
      break;
    case 3:
      d1EsPrimo = true;
      break;
    case 5:
      d1EsPrimo = true;
      break;
    case 7:
      d1EsPrimo = true;
      break;
  }

  switch(d2){
    case 2:
      d2EsPrimo = true;
      break;
    case 3:
      d2EsPrimo = true;
      break;
    case 5:
      d2EsPrimo = true;
      break;
    case 7:
      d2EsPrimo = true;
      break;
  }

  if (d1EsPrimo && d2EsPrimo){
    cout << "Sus dígitos son primos!" << endl;
  }
  else{
    cout << "Sus dígitos no son primos!" << endl;
  }
  return 0;
}
