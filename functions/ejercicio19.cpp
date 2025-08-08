#include <iostream>

using namespace std;

int sumarDigitos(int);


int main(){

    int res = sumarDigitos(321);

    cout << "La suma de los digitos es: " << res;

    cout << "\n\nFin del Programa\n\n" << endl;
    return 0;
}


int sumarDigitos(int n){
    int acum = 0;
    int actual = n;

    while(actual >= 10) {
        acum += actual % 10; // acum = acum + (actual % 10)
        actual /= 10; // actual = actual / 10
    }

    acum += actual;
    return acum;
}