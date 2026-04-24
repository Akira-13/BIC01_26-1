#include <iostream>
using namespace std;

int main() {
    double a, b, c, x, y, grad_x, grad_y;
    
    // Leer a, b, c 
    cin >> a >> b >> c;
    // Leer x, y_ 
    cin >> x >> y;
    
    // Cálculos del gradiente 
    grad_x = 2 * a * x + c * y;
    grad_y = 2 * b * y + c * x;
    
    cout << grad_x << endl;
    cout << grad_y << endl;
    
    return 0;
}
