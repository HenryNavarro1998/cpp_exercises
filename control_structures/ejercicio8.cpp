#include <iostream>

// Los numeros primos solo se dividen entre 1 y el mismo numero:
//  Ej: 1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, ...

using namespace std;

int main(){

    // 1. Pedimos el numero al usuario:
    int n;
    bool isCousin = true;

    cout << "Enter a number: ";
    cin >> n;


    // 2. Recorremos todos los numeros, buscando un divisor: n % i == 0
    for(int i = 2; i <= n/2; i++)
    {
        if (n % i == 0){
            isCousin = false;
            break;
        }
    }


    // 3. Mostramos la respuesta
    cout << ((isCousin)? "The number is cousin" : "It is not cousin") << endl;
    

    cout << "\n\nFin del Programa\n\n" << endl;
    return 0;
}