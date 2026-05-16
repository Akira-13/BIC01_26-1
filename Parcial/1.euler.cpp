#include <iostream>
using namespace std;

int main(){
    int N;
    float e = 0;
    int fact = 1;
    cin >> N;
    for(int i = 0; i < N; i++){
        // Calcular el factorial
        // Notar que cuando i = 0 o i = 1, fact resulta 1
        for(int j = 1; j <= i; j++){
            fact *= j;
        }

        // Alternativa: multiplicaciones consecutivas
        // if(i == 0 || i == 1){
        //     fact = 1;
        // }
        // else{
        //     fact *= i;
        // }
        // Si se usa esta opción, no se reinicia fact al final de
        // la iteración

        // Se usa (float) para evitar redondeos a 0 que ocasionaria normalmente 1/2, 1/3, etc
        e += (float) 1 / fact;

        // Reiniciar fact
        fact = 1;
    }
    cout << e;
    return 0;
}
