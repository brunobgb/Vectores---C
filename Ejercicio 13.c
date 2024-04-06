#include <stdio.h>

int main() {

    /*
    Ejercicio 13

    Se tiene en memoria un vector V de N elementos. Hacer un algoritmo que permita encontrar
    e imprimir la mediana. Mediana es el elemento del medio o central, si N es impar. Si N es
    par, la mediana es la suma de los dos centrales dividido dos.

    */

    int i, j, N, temp;

    printf("Introduzca la longitud del vector: \n");
    scanf("%d", &N);
                                                                // variables, cantidad y los elementos del vector.
    int V[N];

    printf("Introduzca los elementos del vector: \n");

    for (i = 0; i < N; i++) {
        scanf("%d", &V[i]);
    }

    for (i = 0; i < N - 1; i++) {               // Ordenamiento del vvvvector
        for (j = i + 1; j < N; j++) {
            if (V[i] > V[j]) {
                temp = V[i];
                V[i] = V[j];
                V[j] = temp;
            }
        }
    }

    float mediana;
    if (N % 2 == 0) {
        mediana = (float)(V[N/2 - 1] + V[N/2]) / 2;         // Obtención de la mediana
    } else {
        mediana = V[N/2];
    }

    printf("La mediana del vector es: %.2f\n", mediana);

    return 0;
}