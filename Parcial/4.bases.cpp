#include <iostream>
using namespace std;

int main(){
    int opcion = 3;
    int n = 0;
    int base, convertido = 0, aux, i = 1;
    do{
        cout << "Convertor de numeros:" << endl;
        cout << "1. Ingresar numero (por defecto 0)" << endl;
        cout << "2. Convertir numero" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        switch (opcion){
            case 1:
                cout << "Ingrese n: "; cin >> n;
                break;
            case 2:
                cout << "Ingrese base: "; cin >> base;
                aux = n;
                while (aux > 0){
                    convertido += (aux % base) * i;
                    aux = aux / base;
                    i *= 10;
                }
                cout << "Numero " << n << " convertido a base " << base << " es " << convertido << endl;
                convertido = 0; i = 1;
                break;
        }
    } while(opcion != 3);
    return 0;
}

