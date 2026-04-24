#include <iostream>
using namespace std;
int main(){
  int entrada;
  float valor, resultado;
  bool salida = false;
  do{
    cout << "Menu: " << endl;
    cout << "1) Convierta centimetros a pulgadas." << endl;
    cout << "2) Convierta libras a kilogramos." << endl;
    cout << "0) Salir del programa" << endl;
    cin >> entrada;
    switch(entrada){
      case 1:
        cout << "Ingrese centímetros para convertir a pulgada: ";
        cin >> valor;
        resultado = valor / 2.54;
        cout << "El valor en pulgadas es: " << resultado << endl;
        break;
      case 2:
        cout << "Ingrese libras para convertir a kilogramos: ";
        cin >> valor;
        resultado = valor * 0.45;
        cout << "El valor en kilogramos es: " << resultado << endl;
        break;
      case 0:
        cout << "Saliendo del programa...";
        salida = true;
        break;
      default:
        cout << "Esa opción no existe." << endl << "Ingrese nuevamente." << endl;
    }
  } while (!salida);
}
