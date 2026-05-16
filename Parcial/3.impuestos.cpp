#include <iostream>
using namespace std;

int main(){
    int ingreso, impuesto = 0, descuento = 0;
    cout << "REPORTE TRIBUTARIO: " << endl;
    cout << "Ingreso anual: $"; cin >> ingreso;

    if (ingreso > 60000) {
        // 20% sobre el exceso de 60k + 4500 ((60000 - 30000) * 3 / 5) del tramo 3 + 2000 del tramo 2
        impuesto = (ingreso - 60000) / 5 + 4500 + 2000;
    }
    else if (ingreso > 30000) {
        // 15% sobre el exceso de 30k + 2000 ((30000 - 10000) / 10) del tramo 2
        impuesto = (ingreso - 30000) * 3 / 20 + 2000;
    }
    else if (ingreso > 10000) {
        // 10% sobre el exceso de 10k
        impuesto = (ingreso - 10000) / 10;
    }
    // Si es menor a 10000, impuesto se mantiene como 0

    if(ingreso > 100000){
        descuento = 10;
    }
    else if(ingreso > 50000){
        descuento = 5;
    }
    // Si es menor a 50000, descuento se mantiene como 0

    cout << "Impuesto bruto: $" << impuesto << endl;
    cout << "Descuento aplicado: " << descuento << "%" << endl;
    cout << "Monto de descuento: $" << impuesto * descuento / 100 << endl;
    cout << "Impuesto final a pagar: $" << impuesto * (100 - descuento) / 100 << endl;
    return 0;
}
