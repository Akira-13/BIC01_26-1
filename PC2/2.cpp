#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n < 1){
        cout << "n debe ser al menos 1";
        return 0;
    }

    int fi_1 = 0;
    int fi_2 = 1;
    int fi_3 = fi_1 + fi_2;

    // Si n es 1, solo se imprime fi_1
    if (n >= 1){
        cout << fi_1 << " ";
    }

    // Si n es 2, se imprime el if anterior y este
    if (n >= 2){
        cout << fi_2 << " ";
    }

    // Si n es 3 a más, se imprimen los dos ifs y este while
    while (n >= 3){
        cout << fi_3 << " ";

        // Los términos de fibonacci van subiendo
        fi_1 = fi_2;
        fi_2 = fi_3;
        fi_3 = fi_1 + fi_2;
        n--;
    }
}
