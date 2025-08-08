#include <iostream>
#include <cctype>

using namespace std;

int main() {

    int num;

    cout << "Ingrese un valor: ";
    cin >> num;

    while(!isdigit(num)){
        cout << "Incorrect value, please enter a number:";
        cin >> num;
    }

    cout << ((num % 2 == 0)? "El numer es par" : "El numero es Impar") << endl;


    cout << "\n\nFin del Programa\n\n" << endl;
    return 0;
}


