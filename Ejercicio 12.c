#include <stdio.h>

int main() {

    /*
    Ejercicio 12

    Se tiene en memoria un vector B, cuyos elementos son solamente 1 y 0 (vector binario).
    También se tiene en memoria los vectores L y M, todos de tamaño N. Hacer un algoritmo
    que permita crear un vector A tal que:
    A(X) = L(X) si B(X) = 0
    A(X) = M(X) si B(X) = 1

    */

    int N, i;

    printf("Introduzca la cantidad de componentes: \n");
    scanf("%d", &N);

    int B[N], L[N], M[N], A[N]; // 1829e39182 vectores acá

    printf("Introduzca los elementos del vector B (solo 1 o 0): \n");

    for (i = 0; i < N; i++) {                   // Introduce los elementos 0 o 1, error si introduce algo diferente.
        scanf("%d", &B[i]);
        
        while (B[i] != 0 && B[i] != 1) {
            printf("Error... vuelva a introducir \n");
            scanf("%d", &B[i]);
        }
    }

    printf("Introduzca los elementos del vector L: \n");

    for (i = 0; i < N; i++) {
        scanf("%d", &L[i]);
    }                                                                   // Elementos de L y de M.

    printf("Introduzca los elementos del vector M: \n");

    for (i = 0; i < N; i++) {
        scanf("%d", &M[i]);
    }

    printf("Los elementos del vector A son: \n");
    for (i = 0; i < N; i++) {
        if (B[i] == 0) {
            A[i] = L[i];                        // Asigna elementos a A de acuerdo a los valores del vector B.
        } else if (B[i] == 1) { // creo q esto es redundante, un else nomas ya sirve...
            A[i] = M[i];
        }
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}