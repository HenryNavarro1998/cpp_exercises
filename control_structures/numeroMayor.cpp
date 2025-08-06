#include <iostream>

using namespace std;

int main() {

    // 1. Declaramos Variables:
        int x;
        int y;
    // 

    // 2. Pedimos los numeros al usuario:
        cout << "Ingrese 2 numeros: ";
        cin >> x;
        cin >> y;
    // 

    // 3. Comparamos los valores:
        if (x > y){
            cout << "El numero mayor es X: " << x << endl;
        }
        
        if (x < y){
            cout << "El numero mayor es Y: " << y << endl;
        }

        if (x == y){
            cout << "Los numeros son iguales" << endl;
        }
    //

    cout << "\n\nFin del Programa\n\n" << endl;
    return 0;
}