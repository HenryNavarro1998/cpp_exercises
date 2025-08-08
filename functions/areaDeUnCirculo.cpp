// Librerias
#include <iostream>


using namespace std;
// Declaracion de constantes
const float PI = 3.14;

// Declaracion de Funciones
float exp(float,float); // Esta funcion esta chevere
float areaCirculo(float);


// Funcion Main
int main(){

    // Area = pi * r^2 
    float radius;

    cout << "Hey...! Type the radius: ";
    cin >> radius;


    float area = areaCirculo(radius);
    cout << "Man, the area is " << area << " things^2";

    cout << "\n\nFin del Programa\n\n" << endl;
    return 0;
}

// Implementacion de Funciones
float exp(float base, int exponente){
    // Base * Base * Base * ... Exponente veces
    float resultado = 1;

    for(int i = 0; i < exponente; i++){
        resultado *= base; // resultado = resultado * base;
    }

    return resultado;
}

float areaCirculo(float r){
    return (PI * exp(r,2));
}