#include <stdio.h>

int main() {

    /*
    Ejercicio 10

    Hacer un algoritmo que permita contar los elementos del vector que sean múltiplos de 3 y de 5.
    También se desea obtener el promedio de los elementos ubicados en posiciones impares.

    */

    // Declarasió de variables
    int K, i, suma = 0, contadorMultiplos = 0, contadorImpares = 0;
    float promedioSuma;

    printf("Introduzca la longitud del vector: \n");
    scanf("%d", &K);

    int G[K];

    printf("Introduzca los elementos del vector: \n");

    for (i = 0; i < K; i++) {
        scanf("%d", &G[i]);

        if (G[i] % 3 == 0 && G[i] % 5 == 0) { // ""...contar los elementos del vector que sean múltiplos de 3 >>> y <<< de 5"
            contadorMultiplos++;
        }

        if ((i + 1) % 2 != 0) {  // Mismo, tomo 0 como posicón impar tatataa...
            suma += G[i];
            contadorImpares++;
        }
    }

    promedioSuma = (float)suma / contadorImpares; // Convierte suma a float.

    printf("Hay %d múltiplos de 3 y de 5 (a la vez)\n", contadorMultiplos);
    printf("El promedio de los elementos ubicados en posiciones impares es %f\n", promedioSuma);

    return 0;
}