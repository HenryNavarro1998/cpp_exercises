#include <iostream>

using namespace std;

int main(){

    int num;
    int acumulador = 0;

    cout << "Ingrese un numero: ";
    cin >> num;

    // for(int i = 0; i <= num; i++){
    //     acumulador += i;
    // }

    // int contador = 0;

    // while(contador <= num){
    //     acumulador += contador;
    //     contador++;
    // }
    
    // do{
    //     acumulador += contador;
    //     contador++;
    // }while(contador <= num);


    cout << "El resultado es: " << acumulador;

    cout << "\n\nFin del Programa\n\n" << endl;
    return 0;
}