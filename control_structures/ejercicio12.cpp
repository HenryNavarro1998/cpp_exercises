// 
// 
//  1x1=1
//  1x2=2
//  1x3=3
// ...
//  2x1=2
//  2x2=4
// 
// 

#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Ingrese el numero: ";
    cin >> n;

    for(int i = 1; i <= 10; i++){
        cout << n << " x " << i << " = " << n*i << endl;
    }

    cout << "\n\nFin del programa\n\n" << endl;
    return 0;
}