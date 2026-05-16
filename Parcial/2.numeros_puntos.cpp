#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num = 1;
    // Los puntos siguen la relación 4(n-1) con n
    // No se cuentan los puntos impresos siempre junto a los números (No se cuenta el punto en 1.)
    int puntos = 4*(n-1);
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= num; i++){
            cout << i << "."; // 1.2.3.
        }
        for(int j = 0; j < puntos; j++){
            cout << "."; // Impresión de puntos
        }
        for(int i = num; i > 0; i--){
            cout << i << "."; // 3.2.1.
        }
        cout << endl;
        // En cada iteración imprimes un número más
        // e imprimes 4 puntos menos
        num++;
        puntos = puntos - 4;
    }
    return 0;
}
