#include <iostream>

using namespace std;

int main() {

    int num;

    cout << "Ingrese un valor: ";
    cin >> num;

    cout << ((num % 2 == 0)? "El numer es par" : "El numero es Impar") << endl;

    // if (num % 2 == 0) {
    //     cout << "El numero es par";
    // } else {
    //     cout << "El numero es impar";
    // }

    cout << "\n\nFin del Programa\n\n" << endl;
    return 0;
}

// Operador Ternario
// (condicion)? Verdadero : Falso 