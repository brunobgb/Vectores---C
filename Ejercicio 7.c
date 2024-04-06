#include <stdio.h>

int main() {

    /*
    Ejercicio 7

    Se tiene en memoria un vector A de longitud N, hacer un algoritmo que imprima todas las posiciones
    de los elementos de A que sean iguales a una X leída.

    */

    int N, x, i;

    printf("Introduzca un número x: \n");
    scanf("%d", &x);                        // <-- Lectura del número x.

    printf("Introduzca la cantidad de elementos del vector: \n");
    scanf("%d", &N);                        // <-- Cantidad de elementos del vector.

    int A[N];

    printf("Introduzca los elementos del vector: \n");

    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
                                    // <-- Lee los elementos, compara con el número x e imprime la posición en caso de coincidir.
        if (A[i] == x) {
            printf("El elemento ubicado en la posición %d es igual a x\n", i);
        }
    }

    return 0;
}