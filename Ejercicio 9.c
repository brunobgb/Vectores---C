#include <stdio.h>

int main() {

    /*
    Ejercicio 9

    Se tiene en memoria un vector A de K componentes. Hacer un algoritmo que permita obtener
    la sumatoria de todos los elementos ubicados en posiciones pares.

    */


    // Variables, longitud, lectura de elementos...
    int suma = 0, K, i;

    printf("Introduzca la longitud del vector: \n");
    scanf("%d", &K);

    int A[K];

    printf("Introduzca los elementos del vector: \n");

    for (i = 0; i < K; i++) {
        scanf("%d", &A[i]);

        if ((i + 1) % 2 == 0) { // A[0] tomo como posición impar, al ser el "primer" elemento.
            suma += A[i];
        }
    }

    printf("La suma de los elementos ubicados en ubicaciones pares es %d\n", suma);

    return 0;
}