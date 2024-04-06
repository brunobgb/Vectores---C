#include <stdio.h>

int main() {

    /*
    Ejercicio 11

    Se tiene en memoria un vector B de tamaño X. Hacer un algoritmo que permita crear un vector A a partir
    de B, tal que cada A(X) = B(X) - mayor de B.

    */

    int X, i = 0;

    printf("Introduzca la cantidad de componentes: \n");
    scanf("%d", &X);

    int B[X], A[X];

    printf("Introduzca los elementos del vector: \n");
    scanf("%d", &B[i]);

    int mayorElemento = B[i]; // Asigna el primer elemento a mayor para poder comparar abajo.

    for (i = 1; i < X; i++) {
        scanf("%d", &B[i]);

        if (B[i] > mayorElemento) { // La comparación.
            mayorElemento = B[i];
        }
    }

    for (i = 0; i < X; i++) {
        A[i] = B[i] - mayorElemento; // Creación del vector A a partir de B y su mayor elemento.
    }

    for (i = 0; i < X; i++) {
        printf("Estos son los elementos del vector A: \n");
        printf("%d", A[i]);
    }

    return 0;
}