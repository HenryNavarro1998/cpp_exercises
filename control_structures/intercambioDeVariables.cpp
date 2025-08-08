#include <iostream>

using namespace std;

int main(){

    int a, b, aux;

    cout << "Ingresa el valor de A: ";
    cin >> a; // A = 5
    
    cout << "Ingresa el valor de B: ";
    cin >> b; // B = 8

    aux = a; // AUX = 5

    a = b; // A = 8
    b = aux; // B = 5

    cout << "\nEl nuevo valor de A es: " << a << endl;
    cout << "El nuevo valor de B es: " << b << endl;

    cout << "\n\nFin del Programa\n\n" << endl;
    return 0;
}