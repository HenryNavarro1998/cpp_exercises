#include <iostream>

using namespace std;

int main(){

    int n;
    int a=0, b=1;

    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i=0; i < n; i++){
        cout << a << ", ";

        int aux = b;
        b = b+a;
        a = aux;
    }
    
    cout << "\n\nFin del Programa\n\n" << endl;
    return 0;
}