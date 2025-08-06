// 🔸 Ejercicio 6: Calculadora Básica
// Descripción: Implementa una calculadora con operaciones básicas (+, -, *, /)
// Entrada: Dos números y operador (ej: 6, 3, '/')
// Salida: "6 / 3 = 2"

// Ejemplo de ejecución:
// >> Ingrese operación (num1 op num2): 6 / 3
// << Resultado: 2

// Switch Case:


    // switch(condicion) {
    //      case "valor1": Intrucciones; break;
    //      case "valor2": Intrucciones; break;
    //      case "valor3": Intrucciones; break;
    //      case "valor4": Intrucciones; break;
    //      default: Intrucciones;
    // }

#include <iostream>

using namespace std;

int main(){

    // 1. Pedir los datos:
        int num1;
        int num2;
        char opc; //+, -, *, /

        cout << "Ingrese el valor de N1: ";
        cin >> num1;

        cout << "Ingrese el valor de N2: ";
        cin >> num2;

        cout << "Ingrese la operacion (+, -, *, /): ";
        cin >> opc;
    // 

    cout << "El Resultado es: ";
    // 2. Evaluar la opcion:
        switch(opc) {
            case '+': cout << num1 + num2; break;
            case '-': cout << num1 - num2; break;
            case '*': cout << num1 * num2; break;
            case '/': cout << num1 / num2; break;
            default: cout << "Opcion Invalida, intente nuevamente";
        }

    cout << "\n\nFin del Programa\n\n" << endl;
    return 0;
}