#include <stdio.h>

int main() {

    /*
    Ejercicio 14

    Sabiendo que se tiene en memoria un vector de tamaño N (N es par), hacer un algoritmo
    que permita intercambiar todos los elementos de la primera mitad, con los elementos
    de la segunda mitad.

    */

    int N;

    printf("Introduzca el tamaño del vector (debe ser par): \n");
    scanf("%d", &N);
                                                                // Introducción del tamaño par y validación.
    while (N % 2 != 0) {
        printf("El número introducido no es par. Ingrese otro número: \n");
        scanf("%d", &N);
    }

    int H[N];

    printf("Introduzca los elementos del vector: \n");

    for (int i = 0; i < N; i++) {
        scanf("%d", &H[i]);
    }

    for (int i = 0; i < N / 2; i++) {
        int temp = H[i];                        // Primera mitad a la segunda mitad y viceversa
        H[i] = H[i + N / 2];
        H[i + N / 2] = temp;
    }

    printf("Los elementos del vector, intercambiados de mitad, son: \n");

    for (int i = 0; i < N; i++) {
        printf("%d ", H[i]);
    }

    return 0;
}