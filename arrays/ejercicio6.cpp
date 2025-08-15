// Ordenar un array de 10 elementos (burbuja).
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 10;

void llenarArray(int array[], int size);
void mostrarArray(int array[], int size);
void ordenarArray(int array[], int size);

int main(){

    // Inicializamos valores:
        srand(time(NULL)); // Semilla, todos los valores aleatorios sean unicos.
        int array[N];
    //
    
    // 1. Llenamos el array con valores aleatorios:
        llenarArray(array, N);
    // 

    // 2. Mostrar el Array Desordenado:
        cout << "Array Desordenado:" << endl;
        mostrarArray(array, N);
    // 
    
    // 3. Ordenar el Array:
        ordenarArray(array, N);
    // 

    // 2. Mostrar el Array Ordenado:
        cout << "Array Ordenado:" << endl;
        mostrarArray(array, N);
    // 

    cout << "\n\nFin\n\n";
    return 0;
}


void llenarArray(int array[], int size){
    for(int i=0; i < size; i++)
        array[i] = (rand() % 100) + 1;
}

void mostrarArray(int array[], int size){
    cout << "[";
    for(int i=0; i < N; i++)
        cout << array[i] << ((i+1 == N)? "" : ", ");
    cout << "]\n" << endl;
}

void ordenarArray(int array[], int size){
    for(int i=0; i < N-1; i++){
        for(int j=i+1; j < N; j++){
            if(array[i] > array[j]){
                int aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }   
}