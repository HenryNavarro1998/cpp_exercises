# 📘 Clase Básica: Arrays en C++

## 🧠 Teoría: ¿Qué es un Array?

Un **array** (arreglo) es una estructura de datos que almacena múltiples valores del mismo tipo en posiciones contiguas de memoria. Cada elemento se accede mediante un índice, comenzando desde 0.

### 🔹 Características
- Todos los elementos deben ser del mismo tipo.
- El tamaño debe conocerse en tiempo de compilación (en arrays estáticos).
- El acceso a elementos es rápido: tiempo constante \( O(1) \).
- No hay verificación automática de límites: acceder fuera del rango puede causar errores.

### 🔹 Declaración
```cpp
int edades[100]; // Array de 100 enteros
```

### 🔹 Inicialización
```cpp
int notas[3] = {10, 15, 20}; // Inicialización directa
```

### 🔹 Acceso y modificación
```cpp
cout << notas[1]; // Imprime 15
notas[2] = 18;    // Cambia el valor en la posición 2
```

### 🔹 Recorrido
```cpp
for (int i = 0; i < 3; i++) {
    cout << notas[i] << " ";
}
```

---

## 🧪 Ejercicios

### 🟢 Fácil
1. Crear un array de 10 enteros e imprimirlos.
2. Leer 5 números y calcular su suma.
3. Encontrar el mayor de un array de 5 elementos.
4. Contar cuántos números pares hay en un array.
5. Invertir los elementos de un array.

### 🟡 Intermedio
6. Ordenar un array de 10 elementos (burbuja).
7. Eliminar un elemento en una posición dada.
8. Buscar un número en el array.
9. Copiar un array en otro.
10. Intercambiar los valores de dos arrays.

### 🔴 Difícil
11. Eliminar duplicados de un array.
12. Rotar un array a la derecha.
13. Verificar si un array está ordenado.
14. Encontrar el segundo mayor elemento.
15. Sumar dos arrays elemento a elemento.

---

## ✅ Soluciones

### 🟢 Fácil

#### 1. Crear e imprimir
```cpp
int arr[10];
for (int i = 0; i < 10; i++) {
    arr[i] = i * 2;
    cout << arr[i] << " ";
}
```

#### 2. Suma
```cpp
int arr[5], suma = 0;
for (int i = 0; i < 5; i++) {
    cin >> arr[i];
    suma += arr[i];
}
cout << "Suma: " << suma;
```

#### 3. Mayor
```cpp
int arr[5], mayor;
cin >> arr[0];
mayor = arr[0];
for (int i = 1; i < 5; i++) {
    cin >> arr[i];
    if (arr[i] > mayor) mayor = arr[i];
}
cout << "Mayor: " << mayor;
```

#### 4. Pares
```cpp
int arr[10], pares = 0;
for (int i = 0; i < 10; i++) {
    cin >> arr[i];
    if (arr[i] % 2 == 0) pares++;
}
cout << "Cantidad de pares: " << pares;
```

#### 5. Invertir
```cpp
int arr[5] = {1, 2, 3, 4, 5};
for (int i = 4; i >= 0; i--) {
    cout << arr[i] << " ";
}
```

---

### 🟡 Intermedio

#### 6. Ordenar (burbuja)
```cpp
int arr[10];
for (int i = 0; i < 10; i++) cin >> arr[i];
for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9 - i; j++) {
        if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
    }
}
```

#### 7. Eliminar por posición
```cpp
int arr[10], n = 10, pos;
for (int i = 0; i < n; i++) cin >> arr[i];
cin >> pos;
for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
n--;
```

#### 8. Buscar número
```cpp
int arr[10], x, encontrado = -1;
for (int i = 0; i < 10; i++) cin >> arr[i];
cin >> x;
for (int i = 0; i < 10; i++) {
    if (arr[i] == x) {
        encontrado = i;
        break;
    }
}
```

#### 9. Copiar array
```cpp
int a[5] = {1, 2, 3, 4, 5}, b[5];
for (int i = 0; i < 5; i++) b[i] = a[i];
```

#### 10. Intercambiar arrays
```cpp
int a[5] = {1, 2, 3, 4, 5}, b[5] = {6, 7, 8, 9, 10};
for (int i = 0; i < 5; i++) swap(a[i], b[i]);
```

---

### 🔴 Difícil

#### 11. Eliminar duplicados
```cpp
int arr[10], n = 10;
for (int i = 0; i < n; i++) cin >> arr[i];
for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; ) {
        if (arr[i] == arr[j]) {
            for (int k = j; k < n - 1; k++) arr[k] = arr[k + 1];
            n--;
        } else {
            j++;
        }
    }
}
```

#### 12. Rotar a la derecha
```cpp
int arr[5] = {1, 2, 3, 4, 5}, temp;
temp = arr[4];
for (int i = 4; i > 0; i--) arr[i] = arr[i - 1];
arr[0] = temp;
```

#### 13. Verificar orden
```cpp
int arr[5] = {1, 2, 3, 4, 5}, ordenado = 1;
for (int i = 0; i < 4; i++) {
    if (arr[i] > arr[i + 1]) {
        ordenado = 0;
        break;
    }
}
```

#### 14. Segundo mayor
```cpp
int arr[5] = {10, 20, 5, 30, 25}, mayor = INT_MIN, segundo = INT_MIN;
for (int i = 0; i < 5; i++) {
    if (arr[i] > mayor) {
        segundo = mayor;
        mayor = arr[i];
    } else if (arr[i] > segundo && arr[i] != mayor) {
        segundo = arr[i];
    }
}
```

#### 15. Sumar arrays
```cpp
int a[5] = {1, 2, 3, 4, 5}, b[5] = {5, 4, 3, 2, 1}, c[5];
for (int i = 0; i < 5; i++) c[i] = a[i] + b[i];
```

---
