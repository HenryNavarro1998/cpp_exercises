// Convertir a Binario

#include <iostream>
#include <string>

using namespace std;

string invertirCadena(string);

int main(){

    // 1. Pedir el numero al usuario.
    string cad = "CADENA";

    // 2. Dividimos entre 2 y guardamos los residuos.


    // 3. Invertimos la cadena de texto.
    string res = invertirCadena(cad);
    cout << res;

    cout << "\n\nFIN DEL CODIGO\n\n";
    return 0;
}


string invertirCadena(string cad){
    string res;
    for (int i = cad.length()-1; i >= 0; i--){
        res += cad[i];
    }
    return res;
}