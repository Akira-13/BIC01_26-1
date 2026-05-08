#include<cmath>
#include<iostream>
using namespace std;

int main(){
    double x; cout << "Ingrese x (en radianes): "; cin >> x;
    double epsilon = 1e-6; //epsilon = 10^-6
    double termino = 1;
    double serie = 0;
    double aux, fact = 1;
    int n = 0;
    do{
        serie += termino;
        n++;

        // Calculo de factorial
        fact = 1;
        aux = 2*n;
        while (aux > 0){
            fact *= aux;
            aux--;
        }

        //cout << fact << endl;

        // Calculo el nuevo termino
        termino = pow(-1, n) * pow(x, 2*n) / fact;
        //cout << termino << endl;

        // Si este nuevo termino es menor a epsilon, se termina
    } while (fabs(termino) > epsilon);

    cout << "Aproximacion de cos(x): " << serie << endl;
    cout << "Valor real de cos(x): " << cos(x) << endl;
    cout << "Terminos utilizados " << n;

}
