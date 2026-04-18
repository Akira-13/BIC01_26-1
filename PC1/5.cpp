#include <iostream>
using namespace std;

int main(){
  float monto;
  int tipo_cliente;
  cout << "Monto total: ";
  cin >> monto;

  // Idealmente, verificar que no sea negativo
  while(monto < 0){
    cout << "Monto negativo!" << endl;
    cout << "Monto total: ";
    cin >> monto;
  }
  
  cout << "Tipo de cliente (1 estudiante, 2 empleado, 3 regular): ";
  cin >> tipo_cliente;

  switch(tipo_cliente){
    case 1:
      if (monto > 100.0){
        monto = monto*0.8;
      }
      break;
    case 2:
        monto = monto*0.85;
        break;
    case 3:
      if (monto >= 50 && monto <= 200){
        monto = monto * 0.95;
      }
      else if (monto > 200){
        monto = monto * 0.9;
      }
      break;
    default:
      cout << "No se reconoce ese tipo. No se aplica descuento." << endl;
  }

  cout << "Monto a pagar: " << monto;
}
