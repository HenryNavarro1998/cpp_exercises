// Librerias
#include <iostream>


using namespace std;


// Declaracion de Funciones
int exp(int,int); // Esta funcion esta chevere
void mostrarPotencia(int,int,int); // Esta funcion me cae mal


// Funcion Main
int main(){
    int base;
    int exponente;

    // 1. Pedir las variables
    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese la exponente: ";
    cin >> exponente;

    // 2. Calcular las potencias
    int resultado = exp(base, exponente);
    int resultado2 = exp(exponente, base);
    
    // 3. Mostrar los resultados
    mostrarPotencia(base, exponente, resultado);
    mostrarPotencia(exponente, base, resultado2);

    cout << "\n\nFin del Programa\n\n" << endl;
    return 0;
}

// Implementacion de Funciones
int exp(int base, int exponente){
    // Base * Base * Base * ... Exponente veces
    int resultado = 1;

    for(int i = 0; i < exponente; i++){
        resultado *= base; // resultado = resultado * base;
    }

    return resultado;
}

void mostrarPotencia(int base, int exponente, int resultado){
    cout << base << "^" << exponente << " = " << resultado << endl;
}









































// Función matemática
// int potencia(int base, int exponente) {
//     int resultado = 1;
//     for(int i = 0; i < exponente; i++) {
//         resultado *= base;
//     }
//     return resultado;
// }

// // Procedimiento de interfaz
// void mostrarResultado(int base, int exp, int res) {
//     cout << base << "^" << exp << " = " << res << endl;
// }

// int main() {
//     int num = 2;
//     int exp = 3;
//     int resultado = potencia(num, exp);
//     mostrarResultado(num, exp, resultado);
//     return 0;
// }