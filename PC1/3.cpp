#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  srand(time(0));
  int aleatorio = rand()%100;
  int entrada;
  // Pueden verificar que sea aleatorio imprimiéndolo
  // cout << aleatorio << endl;

  // Examen dice 4 intentos pero luego 3
  // Consideramos 4
  for(int i = 1; i <= 4; i++){
    cout << "Intento " << i << ":" << endl;;

    cin >> entrada;

    if (entrada > aleatorio){
      cout << "El número ingresado es mayor. Intenta nuevamente." << endl;
    }

    else if (entrada < aleatorio){
      cout << "El número ingresado es menor. Intenta nuevamente." << endl;
    }

    // Puede ser otro else if (entrada == aleatorio) o simplemente else
    // Ya que si no es ni mayor ni menor entonces es igual
    else {
      cout << "Adivinaste!" << endl;
    }
  }

  cout << "No adivinaste!";
  return 0;
}
