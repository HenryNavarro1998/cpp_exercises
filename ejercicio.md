# Numero Perfecto

Desarrolla la logica para determinar si un numero es perfecto. Un numero es perfecto cuando es igual a la suma de sus divisores.

Ejemplo:

    6 es un numero perfecto ya que lo dividen

            1, 2, 3
    
    si los sumamos: 1 + 2 + 3 = 6


1. Buscar los divisores: 1,2 y 3
2. Sumar los divisores: 1 + 2 + 3 = 6
3. Comparar respuesta: (6 == 6)? Si

R: Es perfecto

Si el 24 es perfecto?

1. Divisores: 1,2,3,4,6,7,8 y 12
2. Sumar los divisores: 1 + 2 + 3 + 4 + 6 + 8 + 12 = 36
3. Comparamos (36 == 24)? No

R: No es perfecto

El 28 es perfecto?

1. Divisores: 1, 2, 4 ,7 y 14
2. Sumamos: 1 + 2 + 4 + 7 + 14 = 28
3. Comparamos (28 == 28)? Si

R: El 28 es perfecto.



# Programar!



1. Pedir el numero
2. Hallar los divisores (n % m == 0)
3. Sumamos los divisores.
4. Comparamos la suma de los divisores con el numero
5. Mostramos la respuesta





# Convertir Numero a Binario

1. Divimos entre 2 el numero.
2. Tomamos el residuo.
3. Evaluamos el resultado
4. Repetimos los pasos 1 y 2, hasta que el resultado sea 0
