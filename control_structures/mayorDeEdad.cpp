// Determine si una persona es mayor de edad


// Edad >= 18

// 1. Pedir la edad de la persona
// 2. Evaluar si la edad es mayor o igual a 18
// 3. Si es mayor o igual a 18, imprimir "Eres mayor de edad"
// 4. Si no, imprimir "Eres menor de edad"

// Librerias
#include <iostream>

using namespace std;

// Funcion Main
int main() {

    int edad;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Eres mayor de Edad" << endl;
    } else {
        cout << "Eres menor de Edad" << endl;
    }


    cout << "Fin del programa\n\n" << endl;
    return 0;
}